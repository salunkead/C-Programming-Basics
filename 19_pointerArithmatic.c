// pointer arithmatic
#include <stdio.h>
void main()
{
    int a = 12;
    char c = 'g';
    int *ptra = &a;
    char *ptrc = &c;
    printf("address of a in decimal %d\n", ptra);
    // when we add 1 to pointer of a then result would be ptr_address+sizeof(int)
    printf("%d\n", ptra + 1);
    printf("%d\n", ptra + 2); // address of a+2*sizeof(int) i.e 4 byte
    printf("%d\n", ptra - 1); // address of a-sizeof(int)
    // let's do it for char
    printf("-----------------------------------------------\n");
    printf("address of char c in decimal %d\n", ptrc);
    printf("%d\n", ptrc + 1); // address of a+sizeof(char) i.e 1 byte
}

/*
there are four arithmatic operators that can be used on pointers
1. ++
2. --
3. +
4. -
*/
