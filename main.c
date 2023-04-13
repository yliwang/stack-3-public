#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

void infix_to_postfix(char *infix, int *postfix, int *rlen);


void main()
{
	char infix[256];
	int postfix[256];
    int len;
    
	strcpy(infix, "(4+5)*9");


	printf("infix:%s\n", infix);

	infix_to_postfix(infix, postfix, &len);

    printf( "postfix:" );
    for( int i=0; i<len; i++ ) {
	    if( postfix[i] == '+' || postfix[i] == '-' || 
           postfix[i[ == '*' || postfix[i] == '/' ) {
               printf( "%c", postfix[i] );
        } else {
               printf( "%d,", postfix[i] );
        }
    }
}
