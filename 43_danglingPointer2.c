// Dangling pointer - returning local variables in function calls
#include <stdio.h>
int *func()
{
    int a;
    int *ptr;
    a = 210;
    ptr = &a;
    return ptr; // as a is the local variable of the function func and it's lifetime is till this return statement
                // when this return statement gets executed then memory allocated to the local variable of function will be distroyed
}
int main()
{
    int *ptr;
    ptr = func(); // returned pointer now becomes dangling pointer
    printf("address of local variable of the function is %x\n", ptr);
    // dereferencing a dangling pointer (undefined behavior)
    // some time it may give exact value or some time not.we cannot rely
    printf("value at the above address is %d\n", *ptr);
    return 0;
}
