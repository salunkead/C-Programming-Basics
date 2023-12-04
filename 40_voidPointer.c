// void pointer
#include <stdio.h>
int main()
{
    void *ptr;
    int a = 12;
    float f = 3.14;
    char c = 'g';
    double d = 1236.256;
    ptr = &a;
    printf("address of a is %x\n", ptr);
    printf("value at address is %d\n", *(int *)ptr);
    ptr = &f;
    printf("address of f is %x\n", ptr);
    printf("value at address is %0.2f\n", *(float *)ptr);
    ptr = &c;
    printf("address of c is %x\n", ptr);
    printf("value at address is %c\n", *(char *)ptr);
    ptr = &d;
    printf("address of d is %x\n", ptr);
    printf("value at address is %lf\n", *(double *)ptr);
    return 0;
}

/*
1.a void pointer is a pointer that has no data type.
2.a void pointer can be typecasted to any pointer type.
3.in simple words it is a general purpose pointer variable.
4.use of void pointer
  1.in dynamic memory allocation,malloc,calloc returns void pointer
  2.these void pointer can be typecasted easily in any type pointer type
5.it is not possible to directly dereference void pointer
6.pointer arithmatic is not allowed on void pointer
*/
