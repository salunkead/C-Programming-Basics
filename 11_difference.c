// difference between while and do-while
#include <stdio.h>
void main()
{
    int i = 0, j = 0;
    do
    {
        printf("inside do-while loop\n");
    } while (i != 0); // even though condition is false,do-while loop runs atleast once but this is not the case with while loop and for loop
    ////////////////
    while (j != 0)
    {
        printf("inside while loop\n");
    }
}
