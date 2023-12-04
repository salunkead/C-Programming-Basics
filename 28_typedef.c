// typedef keyword in c
//Example-1
#include <stdio.h>
int main()
{
    typedef int integer;  //the alternate name of int datatype is integer
    integer a;
    a = 200;
    printf("a=%d\n", a);

    return 0;
}

//Example-2
#include <stdio.h>
typedef struct employee
{
    char code;
    float salary;
    int id;
} emp;

int main()
{
    emp e1, e2;  //user defined data type struct employee has alternate name as emp
    e1.id = 697;
    e1.salary = 200.50;
    e1.code = 'a';
    e2.id = 689;
    e2.salary = 300.89;
    e2.code = 'b';
    printf("code of employee e1 is %c\n", e1.code);
    printf("id of employee e1 is %d\n", e1.id);
    printf("salary of employee e1 is %0.2f\n", e1.salary);
    printf("code of employee e2 is %c\n", e2.code);
    printf("id of employee e2 is %d\n", e2.id);
    printf("salary of employee e2 is %0.2f\n", e2.salary);
    return 0;
}

//Example-3
#include <stdio.h>
int main()
{
    typedef int *intpointer; //alternate name of integer pointer is intpointer
    typedef float *floatpointer;
    typedef char *charpointer;
    int a = 56;
    float b = 52.32;
    char c = 'a';
    intpointer i;
    floatpointer f;
    charpointer ch;
    i = &a;
    f = &b;
    ch = &c;
    printf("address of integer pointer %x\n", i);
    printf("value at address %x is %d\n", i, *i);
    printf("-------------------------------\n");
    printf("address of float pointer %x\n", f);
    printf("value at address %x is %0.4f\n", f, *f);
    printf("-------------------------------\n");
    printf("address of char pointer %x\n", ch);
    printf("value at address %x is %c\n", ch, *ch);
    printf("-------------------------------\n");
    return 0;
}

/*
1.typedef keyword is used to give alternative name to existing datatype.
2.syntax:- typedef existing_name_of_the_datatype user_defined_name_of_the_datatype;
*/
