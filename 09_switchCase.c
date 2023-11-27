// switch-case in c
#include <stdio.h>
void main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    switch (age)
    {
    case 10:
        printf("The age is 10 \n");
        break; // comment break and see result
    case 20:
        printf("The age is 20\n");
        break;
    case 30:
        printf("The age is 30\n");
        break;
    default:
        printf("The age is other than 10,20 and 30\n");
        break;
    }
}

/*
switch statement is a control structure that allows you to select among multiple code blocks based on value of expression.
it provides alternative to using a series of if-else statement when you have multiple conditions to check against a single variable. 

rules for switch statement:-
1.switch expression must be int or char
2.case value must be an integer or a character
3.case must come inside switch
//if there is no break statement in case,it will check on continously
//if break is used it will skip checking other cases and come out of switch
valid switch and invalid switch:-
int a;
switch(a)--> valid
float r;
switch(r)--> invalid switch
*/
