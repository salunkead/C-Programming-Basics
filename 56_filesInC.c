// Working with files in c - writing into the file
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    FILE *ptr = NULL;
    char str[] = "hey i am writing into the file using fprintf function\ni am enjoying coding in c";
    char read[] = "";
    ptr = fopen("sample.txt", "w"); //if the file already exist,it truncate the file to zero length(erase it's contents).if file doenot exist,it attempt to create a new empty file 
    fprintf(ptr, "%s", str);
    fclose(ptr);
    return 0;
}

/*
1.when working with files,we have to declare a pointer of type FILE.
2.the declaration helps us to work with files through c program
3.opening a file - creating or editing a file
  1.stdio.h contain a function called fopen for opening a file in c
  2.syntax: pointer=fopen("file_name","mode");
            ex:- ptr=fopen("E:\\basic.txt","w");
                 ptr=fopen("E:\\programming\\xyz.bin","rb");
4.fclose(pointer) this function is used to close the file
5.in order to read the file,we can use fscanf function
6.fscanf function needs file pointer and other arguments
  syntax: fscanf(pointer,format specifier,variable);
7.we will have to open the file in read mode in order to use this function
8.in order to write to a file,we can use fprintf function
  syntax:-fprintf(pointer,format specifier,variable)
9.we need to open the file in write mode in order to use this function
*/
