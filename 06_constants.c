// constants in c
#include <stdio.h>
#define const_var 56
void main()
{
    int a = 23;
    const int b = 12;
    a = 40;
    // b=45; this will throw an error,beacuse we cannot change value of variable b
    // const_var=80; cannot change value
    printf("normal variable %d\n", a);
    printf("const variable %d and %d\n", b, const_var);
}

/*
a constant is a value or variable that cannot be changed in program
there are two ways of of defining constant in c
1. const keyword
2. #define
*/
