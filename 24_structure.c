// structures in c
#include <stdio.h>
struct student
{
    char c;
    int id;
    float percentage;
} s1, s2, s3; // structure declaration and variables s1,s2,s3--line 8

void main()
{
    // struct student s1,s2,s3; this is same as line 8
    s1.c = 'a'; // method 1 to initialize structure members
    s1.id = 1;
    s1.percentage = 78.21;
    // student 2
    s2.c = 'b';
    s2.id = 2;
    s2.percentage = 84.23;
    // student 3
    s3.c = 'c';
    s3.id = 3;
    s3.percentage = 98.23;
    // datatype variable_name;
    // user defined datatype is struct student
    struct student s4 = {'d', 4, 85.25}; // method 2 to initialize structure members
    printf("student 1 character id %c\n", s1.c);
    printf("student 1 integer id %d\n", s1.id);
    printf("student 1 percentage %0.4f\n", s1.percentage);
    printf("------------------------------------------------------------\n");
    ///////////////////////////////////////////////
    printf("student 2 character id %c\n", s2.c);
    printf("student 2 integer id %d\n", s2.id);
    printf("student 2 percentage %0.4f\n", s2.percentage);
    printf("------------------------------------------------------------\n");
    /////////////////////////////////////////////
    printf("student 3 character id %c\n", s3.c);
    printf("student 3 integer id %d\n", s3.id);
    printf("student 3 percentage %0.4f\n", s3.percentage);
    printf("------------------------------------------------------------\n");
    /////////////////////////////////////////////////
    printf("student 4 character id %c\n", s4.c);
    printf("student 4 integer id %d\n", s4.id);
    printf("student 4 percentage %0.4f\n", s4.percentage);
    printf("------------------------------------------------------------\n");
}

/*
1. structures are user defined data type
2. structure allows us to combine data of different types together
3. it is used to create a complex data type which contains  diverse information
4. they are very similar to array buts structure can store data of any type,which is practically more useful
syntax:
struct structure_name{
    //datatype var1;
    //datatype var2;
}structure_variables;

accessing structure members
1. array elements are accessed using the subscript variable
2. in similar fashion,structure members are accessed using dot(.) operator
3. (.) this dot operator is called structure member operator
4. to access the memebers of the structure,we use dot operator in between structure name and member name
i.e structure_name.member
*/
