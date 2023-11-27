// loops in c
#include <stdio.h>
void main()
{
    // do while loop
    int i = 0, j = 0;
    do
    {
        i = i + 1;
        printf("i=%d\n", i);
    } while (i < 10);
    printf("------------------------------\n");
    // while loop
    while (j < 10)
    {
        j = j + 1;
        printf("j=%d\n", j);
    }
    printf("--------------------------------\n");
    // for loop
    for (int k = 1; k <= 10; k++)
    {
        printf("k=%d\n", k);
    }
}

/*
if you want to do something repeatedly we do use loops
in programming,loops are used when you want to execute a certain block of code repeatedly
there are different types of loops in c

1. while loop
 syntax:-
 while(condition)
 {
    //code to be executed
 }

2. do-while loop:-
syntax:-
do{
    //code to be executed
}while(condition);

3. for loop:-
syntax:-
for(expression 1;expression 2;expression 3)
{
    //code to be executed
}

//expresson 1->
          1.it represents initialization of the loop variable
          2.we can initialize more than one variable
          3.expression 1 is optional
//expression 2->
          1.it is a conditional expression.it checks specific condition to be satisfied.if not loop will terminate.
          2.it can have more than one condition.loop will iterate until the last condition becomes false.other conditions will be treated as statements
          3.it is optional.
//expression 3->
          1.it is used to update loop variable
          2.we can update more than one variables
each type of loop has it's own syntax and use cases,but they serve the purpose of repeating a set of instruction as long as a certain condition is met
*/
