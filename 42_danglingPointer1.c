// Dangling pointer - deallocation of memory
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 123;
    printf("address allocated using dynamic memory allocation function is %x\n", ptr);
    printf("value at above address is %d\n", *ptr);
    free(ptr);  // a pointer pointing to deallocated memory location is called dangling pointer
    ptr = NULL; // pointer is no longer dangling pointer
    return 0;
}

/*
1.a pointer pointing to free location or the location whose contents has been deleted is called dangling pointer
2.causes of dangling pointer
  1.deallocation of memory
  2.returning local variables in function call
  3.variable going out of scope
*/
