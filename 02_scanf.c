#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("the sum of a and b is: %d", a + b);
}
/*
line no. and it's explaination
line.1 #include is used to include header file stdio.h,here we are including standard input output file which has printf,scanf functions defined
line.2 main function is the starting point of the execution of any c program,compiler look for main function and starts executing from main function
line.4 before using any variable we have declare it's type. i.e datatype variable;
line.5 printf function is used to print message on console
line.6 scanf function is used to take inputs from the user through keyboard
      & is address of operator,take the input a and b from the user and store it at the address allocated to a and b.

*/
