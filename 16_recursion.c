// recursion in c
#include <stdio.h>
int fact = 1; // global variable
void print_num(int n)
{
    n = n + 1;
    printf("n=%d\n", n);
    if (n < 20) // when n is less than 20 function will call itself,this condition is called recursive condition
    {
        print_num(n); // function calling itself
    }
    // when n becomes equals to 20 then condition becomes false and function won't call itself,this condtion is called base condition
}
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        fact = fact * num * (num - 1);
        if (num - 2 > 1)
        {
            factorial(num - 2);
        }
        else
        {
            return fact;
        }
    }
}
void main()
{
    int f;
    print_num(0);
    printf("---------------------------------------\n");
    f = factorial(5);
    printf("factorial using recursion is %d\n", f);
}

/*
1. recursion is the process when a function calls a copy of itself to work on a smaller problem
2. any function which calls itself is called recursive function
3. terminaton condition is necessary to stop them calling itself forever
4. any problem that can be solved by recursion,can also be solved by loops
*/
