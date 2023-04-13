This project is related to stack application.
We already showed in class, that stack can be used for converting an infix expression to a postfix one. In this project, one is going to implement a similar function, named as:
void infix_to_postfix( char *infix, int *postfix, int *rlen )
infix contains the infix expression, while postfix will hold the resulting postfix one.
There is one difference between the current project and the one showed in class: operands here are all integers with not-less-than-one digits.
as such, the function prototype is modified to store the resulting postfix expression in an integer array (recall that a string is used in class ), and there is another parameter int *rlen is required to pass length of the postfix expression.
for example, an infix expression: 32+64+96 will result in a postfix expression with array postfix containing: 32 64 '+' 96 '+' and *rlen = 5
The same algorithm as the one shown in class can be used to implement the task. 
an implementation of stack has been provided for this project, 
a defs.h is already properly defined,
One needs to implement code in the function prototype void infix_to_postfix(...) defined in infixtopostfix.c
one can test his/her implementation in main.c
Only infixtopostfix.c will be used for grading.
