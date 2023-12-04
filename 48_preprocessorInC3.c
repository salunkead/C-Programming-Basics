// #define directive in c
#include <stdio.h>
#define pi 3.14
float area(int r)
{
    float ar;
    ar = pi * r * r;
    return ar;
}
int main()
{
    int r;
    r = 5;
    printf("the area of the circle is %0.4f\n", area(r));
    return 0;
}

/*
1.the #define directive is used to define preprocessor variables
2.#define directive replaces word with the number globally
*/
