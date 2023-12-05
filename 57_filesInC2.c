//Working with files in c - reading a file
#include <stdio.h>
int main()
{
    FILE *ptr;
    char c;
    char ch[10];
    ptr = fopen("sample.txt", "r"); //you have to create a file named sample.txt and write some string content. 
    while ((c = fgetc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    /*
    ptr = fopen("sample.txt", "w");
    fputs("i love coding in c", ptr);
    // reading using fgets
    fgets(ch, 9, ptr);
    printf("%s", ch);
    /// fputc
    fputc('A', ptr);
    while ((c = fgetc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    */
    return 0;
}

/*
1. file modes
  1.r - opens file for reading
  2.w - opens file for writing.if it doesnot exits then a new file is created
  3.a - opens file for writing in append mode.program will start appending the contents to the existing file content.
  4.r+ - opens file for both reading and writing
  5.w+ - both reading and writing
  6.a+ - opens file for both readinga nd writing.reading will start from the begining and writing can only append to the file
2.file i/o functions
  1.fputc:-
    1.simplest function to write character to a file is fputc
    2. syntax:-
       int fputc(character,file pointer);
    3.it returns the written character writen on success
    4.on failure it returns EOF
    5.EOF is a constant defined in the header file stdio.h
  2.fputs:- used to write string into the file
      syntx:- int fputs(variable,file pointer);
  3.fgetc:- int fgetc(pointer)
  4.fgets:- int fgets(variable,no of character,pointer);
*/
