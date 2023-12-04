// union in c-difference between structure and union
#include <stdio.h>
struct st
{
    int a;    // 4 bytes
    float f;  // 4 bytes
    double d; // 8 bytes
};
union un
{
    int a1;
    float f1;
    double d1;
};
int main()
{
    struct st s;
    union un u;
    printf("size of structure is %d\n", sizeof(s)); //size of structure will be 4+4+8=16 bytes
    printf("size of union is %d\n", sizeof(u));    //size of union will be max(4,4,8)=8 bytes
    return 0;
}

/*
1.union is a user defined datatype (similar to structure datatype)
2.in structure each member has it's own storage location whereas members of union uses a single shared memory location.
3.this single shared memory location is equal to the size of it's largest data member.
4.like structure,we access any member by using the member access operator(.) in unions.
5.we use keyword union to define union.
6.syntax of union is similar to structure.
7.union cannot handle all the members at once.
*/
