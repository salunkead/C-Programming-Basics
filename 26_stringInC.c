// string in c
#include <stdio.h>
void printName(char name[])
{
    int i = 0;
    while (name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char name[] = {'a', 'm', 'o', 'l', '\0'}; //method 1
    char name[] = "Amol"; // method 2 -compiler adds null character automatically
    printName(name);
    gets(name); // this function is used to get string input from user
    printName(name);
    return 0;
}

/*
1.we have char,float,int and other datatypes but no string datatype in c
2.string is not supported data type in c but it is very useful concept used to model real word entities like name,city etc
3.we express string using an array of character terminated by null character('\0')
4.the size of character data type must be no. of character in string+1
5.extra space is required for '\0' null character
6.null character represents termination of string
7.we can create character array by following ways
  1. char name[]="amol"; ->not need to add null character here
  2. char name[]={'a','m','o','l','\0'};
8.gets()-used to get string as input from the user
9.puts()-used to print the string on console
*/
