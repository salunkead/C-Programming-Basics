// macros using #define
#include <stdio.h>
#define pi 3.14
#define square(x) x *x
int main()
{
    int radius = 12;
    float area;
    area = pi * square(radius);
    printf("the area of the circle is %0.4f\n", area);
    return 0;
}

/*
1.we can also create macros using #define
2.macros operate much like function but because they are expanded in place and are much faster
*/
