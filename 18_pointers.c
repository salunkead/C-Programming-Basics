// pointers in c
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("the variable a is at RAM address %x and at that address value stored is %d\n", ptr, *ptr);
    //* is the dereference operator used to get the value at a given address
}

/*
 1. pointer is the variable which stores the address of another variable
 2. pointer can be of type i.e int,char,array,function etc
 3. ponters in c language can be declared using *(asterisk symbol)
 4. %x format specifier is used to print address in hexa-decimal
 use of pointers:-
    1. pointers are used for dynamic memory allocation
    2. pointers are used to return multiple values from the function
    3. pointers reduces the code and improves the performance

 syntax:-
    datatype *name;
ex:- int a;
     int *ptr;//it means ptr is the variable which stores address of integer variable
     ptr=&a;//& it is address of operator returns the adress of a variable
     a is the integer variable and ptr is the pointer to integer
     ptr has the address of integer variable a
*/
