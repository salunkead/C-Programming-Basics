// wild pointer
#include <stdio.h>
int main()
{
    int *ptr; // it is a wild pointer,uninitialised pointer
    printf("arbitrary memory location is %x\n", ptr);
    return 0;
}

/*
1.uninitialized pointer is known as wild pointer
2.these pointer points to an arbitrary location in memory and may cause program to crash or behave badly
3.dereferencing wild pointer can cause bugs.
4.it is always recommanded to initialize unused pointer to null.
*/
