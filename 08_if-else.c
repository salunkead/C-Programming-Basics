// if-else control statement in c
#include <stdio.h>
void main()
{
    int num;
    printf("Enter any number between 1 to 100\n");
    scanf("%d", &num);
    // only if -> if condition is true then only block of code executes,if false block of code is escaped
    if (num < 50)
    {
        printf("Entered number is less than 50\n");
    }
    // if-else-> if condition is true then if block of code is executed else else block of code gets executed
    if (num < 50)
    {
        printf("Entered number is less than 50\n");
    }
    else
    {
        printf("Entered number is greater than 50\n");
    }
    // if-elseif ladder-> it is like priority based checking if true execute,if false go for next else if part like this
    if (num <= 20)
    {
        printf("Entered number is in range 1 to 20\n");
    }
    else if (num >= 21 && num <= 30)
    {
        printf("Entered number is in range 21 to 30\n");
    }
    else if (num >= 31 && num <= 40)
    {
        printf("number is in range 31 to 40\n");
    }
    else
    {
        printf("Entered number is greater than 40\n");
    }
}

/*
it is used to perform operation based on some conditions
types of statements
1. only if statement
2. if-else statement
3. if-elseif ladder
4. nested if
*/
