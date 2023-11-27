// format specifiers in c
#include <stdio.h>
void main()
{
    int a = 12;
    float f = 3.144444;
    float f1 = 0.000001426;
    char c = 'a';
    int *ptr = &a;
    printf("int format specifier %d\n", a);
    printf("float format specifier %f\n", f);
    printf("floaat format specifier2 %0.2f\n", f); //%0.2f means print two places after decimal point
    printf("char format specifier %c\n", c);
    printf("format specifier for pointer %p\n", ptr);
    printf("format specifier to print raise to 10 %e", f1); // 1.426*10^-6
}

/*
format specifier is the way of telling to the compiler what type of data a vaiable is holding during taking input or displaying output to the user.
ex. printf("a=%d",a); i.e variable a has integer type of data

datatype                             | format specifier
----------------------------------------------------
1. int                               | %d
2. char                              | %c
3. float                             | %f
4.double                             | %lf
5.pointer                            | %p
6.string                             | %s
7.to print in hexadecimal            | %x
8.to print in scientific notation    | %e
----------------------------------------------------
*/
