// break and continue in c
#include <stdio.h>
void main()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        if (i == 6)
        {
            break; // if i equals to 6,break the loop and control will come out of loop
        }
        else
        {
            printf("i=%d\n", i);
        }
    }
    printf("out of the loop when value of i=%d\n", i);
    /////////////////////////////////
    for (int j = 1; j < 20; j++)
    {
        if (j % 2 == 0)
        { // if j is divisible by 2 then skip it and go to next
            continue;
        }
        else
        {
            printf("j=%d\n", j);
        }
    }
}

/*
//break statement
1.break statement is used to bring the program control out of the loop
2.the break statement is used inside loop or switch statement
  we can use break statement in for loop,do-while loop or while loop

//continue statement
1.it is used to bring control to the next iteration of loop
2.continue statement skips some code inside loop and continue with the next iteration
3.it is primarily used for a condition so that we can skip some lines of code for particular condition
*/
