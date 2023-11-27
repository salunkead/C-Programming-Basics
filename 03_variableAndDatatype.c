// variables and datatype
// code- no of bytes taken by c datatype in computer memory (this code is important to understand pointer arithmatic)
#include <stdio.h>
void main()
{
    float f; //datatype variable_name
    double d;
    char c;
    int a;
    long int l;
    short int sh;
    printf("no. of bytes taken by float datatype %d\n", sizeof(f));
    printf("no. of bytes taken by double datatype %d\n", sizeof(d));
    printf("no. of bytes taken by char datatype %d\n", sizeof(c));
    printf("no. of bytes taken by int datatype %d\n", sizeof(a));
    printf("no. of bytes taken by long int datatype %d\n", sizeof(l));
    printf("no. of bytes taken by short int datatype %d\n", sizeof(sh));
}

/*
1.variables are the containers which holds the data,or a name given to a memory location
2.variables are declared by writing -> type variable_name; ex int a,float f;
3.initialized and declared by writing -> type variable_name=value; ex int a=12,float f=3.14;
//rules for defining variables
1.can contain digit,alphabet and underscore
2.variable can start with an alphabet and underscore only
3.can't start with digit
valid variable names:- int a,float a1,char _name
invalid variable name:- int 1a,float @st etc.
////datatypes
1.basic datatype--int,float,char,double
2.derived datatype--array,pinter,structure,union
3.enumeration data type-- enum
4.void datatype-- void
*/
