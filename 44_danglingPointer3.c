// Dangling pointer-variable going out of scope
#include <stdio.h>
int main()
{
    int *ptr;
    { // scope starts
        int num = 32;
        ptr = &num;
    } // scope ends
    // as the scope ends the memory allocated to variables gets destroyed
    // therefor ptr now becomes a dangling pointer
    printf("num variable is stored at address %x\n", ptr);
    // dereferencing a dangling pointer (undefined behavior)
    // some time it may give exact value or some time not.we cannot rely
    printf("value at the above address is %d\n", *ptr);
    return 0;
}
