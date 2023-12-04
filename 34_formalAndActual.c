// formal and actual parameters are different
#include <stdio.h>
void func1(int a)
{
    printf("a=%d\n", a);
    printf("the address of a inside func1 function is %x\n", &a);
}
int main()
{
    int a;
    a = 200;
    func1(a);
    printf("the address of a inside main function is %x\n", &a);
    return 0;
}

/*
1.when we call any function values of actual parameters are copied into the formal parameters of the function
2.actual and formal parameters has different memory address
3.the formal parameters of the function are treated as local variables of the function
*/
