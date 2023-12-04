#include <stdio.h>
#include "46_preprocessorInC1.c"  //Here we have included all the contents of file 46_preprocessorInC1.c
int main()
{
    float x, y;
    x = 12.32;
    y = 23.32;
    printf("the sum is : %0.4f\n", sum(x, y));
    return 0;
}

/*
1.the #include directive is used to fetch the contents of the other file to be included in the present file
2.this file may in turn #include some other files which may in turn do the same
3.most commonly the #include files have a '.h' extension ,indicating thet they are header files.
4.two common #include file format
  1.#include<header_file_name.h>  the angle braces says to look in the standard system directory
  2.#include "file_name.h"  the quotation marks says to look in the current directory
5.full path of the file is also allowed
  #include<c:\program files\amol\fileName.h>
*/
