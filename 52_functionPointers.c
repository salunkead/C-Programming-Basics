// function pointers in c
#include <stdio.h>
int func1(int a, int b)
{
    return a + b;
}
float func2(float a, float b)
{
    return a + b;
}
void display()
{
    printf("this is the display function\n");
}
int main()
{
    int (*ptr1)(int, int);
    float (*ptr2)(float, float);
    void (*ptr3)(void);
    ptr1 = &func1;
    ptr2 = &func2;
    ptr3 = &display;
    printf("the function func1 is at address %x\n", ptr1);
    printf("the function func2 is at address %x\n", ptr2);
    printf("the function display is at adress %x\n", ptr3);
    printf("the sum using func1 is %d\n", (*ptr1)(56, 48)); // dereferencing function pointer
    printf("the sum using func2 is %0.2f\n", (*ptr2)(12.65, 85.23));
    ptr3(); // void(return type) function call using pointer
    return 0;
}

/*
1.we can have pointers pointing to function as well
2.function pointer point to code not to data
3.function pointers are useful for implementing callback function
  syntax: return_type (*pointer_name)(formal arguments type);
4.function pointer cannot be used to allocated or deallocate memory.
5.only normal pointers can be used to allocate or deallocate memory.
*/
