// Dynamic memory allocation function-calloc
// note:-the functions malloc,calloc,realloc,free are declared and defined inside stdlib header file
#include <stdio.h>
#include <stdlib.h>
int main()
{
     float *ptr;
     int size;
     printf("enter the size of the array you want to create\n");
     scanf("%d", &size);
     ptr = (float *)calloc(size, sizeof(float));
     for (int i = 0; i < size; i++)
     {
          printf("enter value of element at %d index\n", i);
          scanf("%f", ptr + i);
     }
     printf("----------------------------------------\n");
     for (int i = 0; i < size; i++)
     {
          printf("value at index %d is %0.2f\n", i, *(ptr + i));
     }
     return 0;
}

/*
1.calloc stands for contiguous allocation
2.it reserves n blocks of memory with the given amount of bytes
3.the return value is the void pointer to the allocated space
4.therefore void pointer needs to be casted into the appropriate type as per the requirements
5.all the values at the allocated space are initialized to 0
6.syntax:
     pointer=(pointer_type*)calloc(n,size_in_bytes);
*/
