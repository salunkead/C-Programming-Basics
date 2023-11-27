// go to statement in c
#include <stdio.h>
void main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i == 50)
        {
            goto label;
        }
        else
        {
            printf("i=%d\n", i);
        }
    }
label:
{
    printf("program control is here now\n");
}
printf("-------------------------------------------------\n");
for(int i=0;i<10;i++)
{
    for(int j=0;j<10;j++)
    {
        printf("i=%d j=%d\n",i,j);
        if(i==2&&j==2)
        {
            goto endMultipleLoop;
        }
    }
}
endMultipleLoop:printf("The End of multiple loop\n");
}

/*
1. goto statement is also called jump statement
2. used to transfer program control to a predefined label
3. goto statement is used when we want to break multiple loop using a single statement
*/
