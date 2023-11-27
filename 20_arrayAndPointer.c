// array and pointer
#include <stdio.h>
void main()
{
    // all the array elements are stored at contiguous memory location
    int a[5] = {45, 10, 63, 78, 96};
    int *ptr;
    ptr = a;
    printf("address of first element of array %x\n", &a[0]);
    printf("address stored by pointer %x\n", ptr);
    // printing all the elements of an array using pointer arithmatic and dereferencing operator
    // if ptr is the pointer to a[0] then ptr+i is a pointer to a[i]
    for (int i = 0; i < 5; i++)
    {
        printf("element at index %d is %d\n", i, *(ptr + i));
    }
}

/*
consider the following declaraton
1. int arr[10]
        it is an integer type array
2. arr by itself witout any index subscripting can be assigned to an integer pointer
        i.e int *ptr;
        ptr=arr; //valid one
        the pointer ptr will store the address of first element of an array
        i.e &arr[0]=ptr
        address of first element of array and address stored by pointer are same
3. pointer arithmatic can be used to access elements of an array
*/
