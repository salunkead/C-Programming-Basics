// when we pass array as function argument,any change made to array inside function gets reflected into array of main function
#include <stdio.h>
void array(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    arr[0] = 20;
}
void main()
{
    int arr[5] = {10, 25, 63, 85, 100};
    array(arr);
    printf("-----------------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}
