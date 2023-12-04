// null pointer in c
#include <stdio.h>
int main()
{
    int *ptr;
    int *ptr1 = NULL;
    printf("address stored by ptr=%x\n", ptr);   // returns a garbage address
    printf("address stored by ptr1=%x\n", ptr1); // returns 0
    printf("value at address ptr is %d\n", *ptr);
    if (ptr1 == NULL)
    {
        printf("pointer is a null pointer and cannot be dereferenced\n");
    }
    else
    {
        printf("value at address is %d\n", *ptr1);
    }
    return 0;
}

/*
1.null pointer is a pointer which has a value reserved for indicating that the pointer doesnot refer to a valid object
2.a null pointer is a pointer that points to NULL(nothing)
3.in simple words it is a pointer which is not pointing to anything.
4.dereferencing a null pointer is undefined behaviour in c.a null pointer should not be dereferenced.
5.uses of null pointer
  1.to initialize a pointer variable in cases where pointer variable has not been assigned to a valid address yet.
  2.to check for legitmate address location before accessing any pointer variable.
6.null pointer vs uninitialized pointer-an uninitialized pointer contains undefined value
7.null pointer vs void pointer:- null pointer is a value whereas void pointer is a type.
*/
