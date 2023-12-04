// Dynamic memory allocation function-malloc
// note:-the functions malloc,calloc,realloc,free are declared and defined inside stdlib header file
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr;
  ptr = (int *)malloc(5 * sizeof(int));
  for (int i = 0; i < 5; i++)
  {
    printf("enter value of element at %d index\n", i);
    scanf("%d", ptr + i);
  }
  printf("----------------------------------------\n");
  for (int i = 0; i < 5; i++)
  {
    printf("value at index %d is %d\n", i, *(ptr + i));
  }
  return 0;
}

/*
1.in dynamic memory allocation,the memory is allocated at runtime from the heap segment.
2.we have four functions that will help us achive this task
  1.malloc
  2.calloc
  3.realloc
  4.free
3.malloc function
  1.malloc stands for memory allocation
  2.it reserves a block of memory with the given amount of bytes.
  3.the return value is a void pointer to the allocated space.
  4.therefore the void pointer needs to be casted to the appropriate type as per the requirements
  5.all the values at the allocated memory are initialized to garbage values
  6.syntax:- ptr=(ptr_type*)malloc(size_in_bytes);
*/
