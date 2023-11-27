// array in c
#include <stdio.h>
void main()
{
    int arr[5];
    float arr1[5] = {12.2, 5.6, 4.3, 6.2, 10.2}; // array declaration with initialization
    int arr2[2][2] = {{12, 14},
                      {65, 74}}; // 2 dimensional array
    for (int i = 0; i < 5; i++)
    {
        printf("enter the element for %d index\n", i);
        scanf("%d", &arr[i]);
    }
    printf("-----------------------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("element at index %d is %d\n", i, arr[i]);
    }
    ///////////////////////////////////////
    printf("-----------------------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("element at index %d is %0.2f\n", i, arr1[i]);
    }
    //////////////////////////////////////
    printf("-----------------------------------------------\n");
    for (int r = 0; r < 2; r++) // loop for row
    {
        for (int c = 0; c < 2; c++) // loop for column
        {
            printf("element at %d row and %d column is %d\n", r, c, arr2[r][c]);
        }
    }
}

/*
syntax:- datatype name[size];,datatype name[row][columns];//for 2d array,datatype name[size]={x,y,....};
         we can initialize array one by one using index ex. name[0]=23,name[1]=56 etc

1. array is the collecton of same datatype
2. all the elements of an array are strored at contiguous memory locations
3. it can also store collection of derived datatype such as pointer,structure etc
4. one dimensional array is like a list
5. two dimensional array is like a table

Why to use array?
1. code that uses array is sometimes more organized and readable
2. if you want to store the marks of 50 students,creating 50 variables for each student will make program look
   cluttered and messy.
3. solution to this is array
4. we can create array of integers and store the consecutive marks corresponding to the roll number in an array

Properties of array
1. data in an array is stored in contiguous memory location
2. each element of an array is of same size i.e int arr[5]; each element of array will take 4 bytes
3. any element of the array with given index can be accessed by using address which can be calculated using base address and index

Disadvantages of array
1. wastage of memory since arrays are fixed in size
2. it is not possible to increase the size of array,once you have declared it.
*/
