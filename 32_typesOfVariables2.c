// types of variables in c:global variable
#include <stdio.h>
int a = 256; // global variable
void function()
{
    printf("inside function:value of the variable a=%d\n", a);
}
int main()
{
    printf("inside main function: value of variable a=%d\n", a);
    function();
    return 0;
}
/////////////////

int a = 256; // global variable
void function()
{
    int a = 500; // local variable of function
    printf("inside function:value of the variable a=%d\n", a);
}
int main()
{
    int a = 600; // local variable of function main
    printf("inside main function: value of variable a=%d\n", a);
    function();
    return 0;
}

/*
1.global variables are the variables that are defined outside the main function.
2.global variables are accessible throughout the entire program from any function.
3.if local and global variables has same name then local variables will take preference.
*/
