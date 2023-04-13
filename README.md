This project is related 
to stack application.
We already showed in class, that stack can be used for converting an infix expression to a postfix one. In this project, one is going to implement a similar function, named as:
void infixtopostfix( char *infix, int *postfix, int *rlen )
infix contains the infix expression, while postfix will hold the resulting postfix one.
There is one difference between the current project and the one showed in class: operands here are all integers with not-less-than-one digits.
The same algorithm as the one shown in class can be used to implement the task. 
an implementation of stack has been provided for this project, 
a defs.h is already properly defined,
One needs to implement code in the function prototype void infixtopostfix(...) defined in infixtopostfix.c
one can test his/her implementation in main.c
Only infixtopostfix.c will be used for grading.
