// type of variables in c-local variable
#include <stdio.h>
void local()
{
    int localvar; // local variable of function local,other function cannot access this variable only function itself can.
    localvar = 200;
    printf("inside function: local variable is : %d\n", localvar);
}
int main()
{
    local();
    // printf("outside function: the value of localvar is %d\n", localvar); //throws error
    // the main itself is function
    // main function cannot access the local variable of local function
    return 0;
}

/*
1.local variables:-
  1.scope is a region of the program where a defined variable can exist and beyond which it cannot be accessed
  2.if a variable is declared inside function,then it's scope will be inside function only.i.e it is accessible onlt inside function not outside function
    they are inaccessible to other function
*/
