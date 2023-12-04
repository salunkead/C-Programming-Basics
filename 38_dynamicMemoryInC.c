// Dynamic memory allocation function-free
// note:-the functions malloc,calloc,realloc,free are declared and defined inside stdlib header file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int size;
    printf("enter the size of array\n");
    scanf("%d", &size);
    ptr = (int *)calloc(size, sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("enter character at %d index\n", i);
        scanf("%d", ptr + i);
    }
    printf("-------------------------------------\n");
    free(ptr);  //this pointer is pointing to unallocated memory location-dangling pointer
    for (int i = 0; i < size; i++)
    {
        printf("character at %d index is %d\n", i, *(ptr + i));
    }
    return 0;
}

/*
1.free() function is used to free the allocated memory
2.if dynamically allocated memory is not required anymore then we can free it using this function
3.this free the memory being used by the program in the heap
4.syntax:
    free(pointer);
*/
