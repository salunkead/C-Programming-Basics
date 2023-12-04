//string.h header file in c
#include<stdio.h>
#include<string.h>
int main()
{
    char name[]="Amol";
    char name1[]=" Salunke";
    char n[]="";
    printf("strlen() function is used to show length of a string\n");
    printf("length of name is %d\n",strlen(name));
    printf("length of name1 is %d\n",strlen(name1));
    /////////////////////////////////
    printf("strcpy() function is used to copy one string into another\n");
    printf("%s\n",strcpy(n,name1));
    puts(name1);
    puts(n);
    ////////////////////////////////////
    printf("strcmp() function is used to compare two strings\n");
    printf("%d\n",strcmp(name1,n));
    /////////////////////////////////////////
    printf("strcat() function is used to concatinate or combine two strings\n");
    printf("%s\n",strcat(name,name1));
    /////////////////////////////////
    printf("strrev() function is used to reverse the string\n");
    printf("%s\n",strrev(name));
    return 0;
}

/*
1.functions from string.h header file can be used to manipulate strings.
*/
