// callback function in c
#include <stdio.h>
float divide(float a, float b)
{
    return a / b;
}
void display(float (*ptr)(float, float))
{
    float x, y;
    printf("enter two numbers for division\n");
    scanf("%f %f", &x, &y);
    printf("the result of division is %0.4f\n", (*ptr)(x, y));
}
int main()
{
    float (*ptr)(float, float); // function pointer
    ptr = divide;               // ptr=&divide is same as ptr=divide,pointer ptr is pointing to divide function
    display(ptr);
    return 0;
}

/*
1.function pointers are used to pass a function to a function.
2.this passed function can then be called again.
3.this provides programmer to write less code to do more stuffs.
*/
