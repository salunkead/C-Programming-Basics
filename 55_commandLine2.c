// average of numbers entered through command line
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    float avg;
    printf("numbers entered through command line are\n");
    for (int i = 1; i < argc; i++)
    {
        printf("%d\n", atoi(argv[i]));
    }
    printf("-------------------------------\n");
    for (int i = 1; i < argc; i++)
    {
        sum = sum + atoi(argv[i]);
    }
    printf("the sum is %d\n", sum);
    avg = (float)sum / (float)(argc - 1);
    printf("the average of numbers entered through command line is %0.4f\n", avg);
    return 0;
}

/*
1.atoi:- it is standard c library function which stands for ASCII to integer.
        it is used to convert a string of characters that represents an interger in ASCII format into an actual integer
        this function is defined in stdlib.h header file
2.atof:- it stands for ASCII to float.
        this function is also defined in <stdlib.h> header file.
*/
