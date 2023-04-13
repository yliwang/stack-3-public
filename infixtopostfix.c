#include<stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdbool.h>

#include <string.h>

#include "stack.h"

int precedence(int c)
{
	if (c == '*' || c == '/') return 2;
	else if (c == '+' || c == '-') return 1;
	
	return 0;
}

void infix_to_postfix(char *infix, char *postfix)
{
	struct stack s;
	int len, i, n;
	int prec;

	init_stack(&s, 50);

	len = strlen(infix);

	n = 0;

	for (i = 0; i < len; i++) {
		int c = infix[i];

		if (c >= '0' && c <= '9') {
			postfix[n] = c;
			n++;
		}
		else {
			switch (c) {
			case '+':
			case '-':
			case '*':
			case '/':
				while( !is_empty( &s ) && top(&s) != '(' && precedence(c) <= precedence(top(&s)) ) {
					/* remove from stack and add to postfix */
					postfix[n] = pop(&s);
					n++;
				}

				/* push c onto stack */
				push(&s, c);
				break;
			case '(':
				push(&s, '(');
				break;
			case ')':
				while (!is_empty(&s) && top(&s) != '(') {
					postfix[n] = pop(&s);
					n++;
				}
				/* remove '(' */
				pop(&s);
				break;
			default:
				assert(0);
				break;
			}
		}
	}

	/* empty stack */
	while (!is_empty(&s)) {
		postfix[n] = pop(&s);
		n++;
	}

	postfix[n] = '\0';

	uninit_stack(&s);
}

void main()
{
	char infix[256];
	char postfix[256];

	//strcpy(infix, "3+4*5");

	//strcpy(infix, "4+5*9");
	strcpy(infix, "(4+5)*9");
	//strcpy(infix, "(2+8)*(7/3)");
	//strcpy(infix, "(3+4)*5");
	//strcpy(infix, "3*4+5");
	//strcpy(infix, "((2*5)/(6/4))+(2*3)");


	printf("infix:%s\n", infix);

	infix_to_postfix(infix, postfix);

	printf("postfix:%s\n", postfix);
}