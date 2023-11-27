// typecasting in c
#include <stdio.h>
void main()
{
    float r = 3.14;
    float divide = 65 / 3;
    printf("before typecasting %0.2f\n", r);
    r = (int)r;
    printf("after typecasting %0.2f\n", r);
    printf("divide=%0.4f\n", divide);
    divide = (float)65 / 3;
    printf("divide=%0.4f\n", divide);
}

/*
1.typecasting is used to convert one datatype to other datatype
2.it's a way to tell the compiler to treat a variable as a different data type than it's original declared type. 

syntax:
(type)variable;
int/int =result int
int/float=result float
*/
