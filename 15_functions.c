// functions in c
#include <stdio.h>
int add(int a, int b) // here a and b are called formal arguments and this function returns integer as result
{
    return a + b;
}
float add1(float a, float b) ////whereever this function is called it returns float value
{
    return a + b;
}
void multiply(int x, int y) // function without return,it doesnot return any value
{
    int r;
    r = x * y;
    printf("multiplication using function multiply %d\n", r);
}
void display()
{
    printf("function without return type and arguments\n");
}
float divide() // function without arguments and with return
{
    int n1, n2;
    float re;
    printf("Enter any two numbers\n");
    scanf("%d %d", &n1, &n2);
    re = (float)n1 / n2;
    return re;
}
void main()
{
    int r;
    float f, f1;
    r = add(23, 57); // we need to call the function
    printf("result using function %d\n", r);
    f = add1(23.65, 456.45);
    printf("result using add1 function %0.5f\n", f);
    multiply(23, 6);
    display();
    f1 = divide();
    printf("result using function divide %0.4f\n", f1);
}

/*
functions are used to divide a large c program into smaller pieces
a functions can be called multilpe times to provide reusability
functions are also called procedures or subroutine
//syntax of c function:-

return_type function_name(datatype parameter1,datatype parameter2,....)
{
    //code to be executed
}

Advantages of c function
1. we can avoid rewriting same logic through program
2. we can divide work among programmers using function
3. easy debug

types of function
1. library function:- functions included in c header file ex-printf,scanf etc
2. user defined functions:-functions created by the user to reduce complexity of the program
*/
