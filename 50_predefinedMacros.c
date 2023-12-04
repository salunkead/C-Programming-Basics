// Predefined macros in c
#include <stdio.h>
int main()
{
    printf("the file name is %s\n", __FILE__); //used to get name of the file
    printf("the current line number is %d\n", __LINE__);  //used to get current line number
    printf("the date is %s\n", __DATE__);  //used to get date
    printf("the time is %s\n", __TIME__);  //used to get the time
    return 0;
}
