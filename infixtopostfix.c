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

void infix_to_postfix(char *infix, int *postfix, int *rlen)
{
	
}

