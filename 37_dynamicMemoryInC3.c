////Dynamic memory allocation function-realloc
// note:-the functions malloc,calloc,realloc,free are declared and defined inside stdlib header file
#include <stdio.h>
#include <stdlib.h>
int main()
{
   float *ptr;
   int size, nsize;
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
   printf("----------------------------------------\n");
   printf("enter the new size of array\n");
   scanf("%d", &nsize);
   ptr = realloc(ptr, nsize * sizeof(float));
   for (int i = 0; i < nsize; i++)
   {
      printf("enter value of element at %d index\n", i);
      scanf("%f", ptr + i);
   }
   printf("----------------------------------------\n");
   for (int i = 0; i < nsize; i++)
   {
      printf("value at index %d is %0.2f\n", i, *(ptr + i));
   }
   return 0;
}

/*
1.realloc() stands for reallocation
2.if the dynamically allocated memory is insufficient we can change the size of the previously allocated memory using realloc
3.syntax:
   pointer=(pointer_type*)realloc(pointer,new_size_in_bytes)
*/
