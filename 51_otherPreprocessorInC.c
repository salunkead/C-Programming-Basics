// other preprocessors in c
#include <stdio.h>
#define p1 3
#define p2 4
int main()
{
#if p1 == 3
    printf("pi is defined as 3\n");
#else
    printf("pi is defined as 5\n");
#endif
/////////
#undef p1
///////
#ifndef p1
    printf("pi is not defined\n");
#endif
////////
#ifdef p2
    printf("p2 is defined as %d\n", p2);
#endif
/////
#if p2 < 3
    printf("p2 is less than 3\n");
#elif p2 == 3
    printf("p2 is equal to 3\n");
#else
    printf("p2 is greater than 3\n");
#endif
}

/*
1.#ifdef:-it checks whether the a particular macro is defined
        if the specified macros is defined then the code between #ifdef and #endif is included during compilation;
        otherwise that code will be excluded in the compilation
2.#endif:-used to mark the end of the conditional block initiated by '#if','#ifdef','#ifndef','#elif' or '#else'
3.#undef:-it is used to undefine or remove a previously defined macro.
        when you use #define to create the macro,you can later use #undef to remove that definition
4.#ifndef:- it stands for if not defined
5.#if,#else
6.#error:- used to generate a compilation error with specific error message
        #error "message to be displayed"
*/
