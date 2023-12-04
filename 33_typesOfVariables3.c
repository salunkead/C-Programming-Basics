// types of variables in c - static variables
#include <stdio.h>
// without static variable
int function()
{
    int a = 10; // non-static variables are initialized every time when function called
    a++;
    return a;
}
int main()
{
    int a1;
    a1 = function();
    printf("a1=%d\n", a1);
    a1 = function();
    printf("a1=%d\n", a1);
    return 0;
}

// with static variable
#include <stdio.h>
int function()
{
    static int a = 10; // static variables are initialized only once,they preserve their value
    a++;
    return a;
}
int main()
{
    int a1;
    a1 = function();
    printf("a1=%d\n", a1);
    a1 = function();
    printf("a1=%d\n", a1);
    return 0;
}

/*
1.static variables are the variables which have a property of preserving their value even when they go out of scope.
2.they preserve their value from the previous scope and are not initialized again.
3.static variables remain in memory throughout the span of the program.
4.static variables are initialized to 0 if not initialized explicitly.
5. syntax:- static data_type variable_name;
*/
