// passing array as a function argument
#include <stdio.h>
float method1(int avg[5])//by declaring array as a parameter in the function
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + avg[i];
    }
    return ((float)sum / 5);
}
float method2(float *ptr)//by declaring a pointer in the function to hold the base address of the array
{
    float sum;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(ptr + i);
    }
    return sum / 5.0;
}

void main()
{
    float avg, avg1;
    int arr[5] = {10, 56, 84, 25, 21};
    float arr1[5] = {10.2, 56.4, 84.5, 25.30, 21.52};
    float *ptr;
    ptr = arr1;
    avg = method1(arr);
    printf("the average by first method is %0.4f\n", avg);
    avg1 = method2(ptr);
    printf("the average by second method %0.4f\n", avg1);
}

/*
why and how to pass array?
1. we pass array to a function when we need to pass list of values to a given function
2. we can pass array to a function
   1. by declaring array as a parameter in the function
   2. by declaring a pointer in the function to hold the base address of the array
***when we pass array as function argument,any change made to array inside function gets reflected into array of main function

*/
