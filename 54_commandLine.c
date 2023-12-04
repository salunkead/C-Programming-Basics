// command line arguments in c
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("no of arguments are %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("the arguments stored from the command line are %s\n", argv[i]);
    }
    return 0;
}

/*
1.command line arguments are used to pass inputs to a function from the command line
2.command line arguments are used to supply parameters to the program when it is invoked
3.it is mostly used when you need to control your program from the console
4.these arguments are passed to the main function
5.int main(int argc,char const *argv[])
5.argc:-no of arguments c-->count
6.argv:-array of pointers v-->value
7.first member of argv is the string i.e full path of the file
8.in terminal .\filename.exe arguments to be passed can be written here
9.we can take integers as character from command line and then we can typecast them into int
*/
