// array of structure
#include <stdio.h>
struct person
{
    char name[50];
    int age;
    float height;
};
void main()
{
    struct person p[2];
    /////////get the name,age and height of the person 1
    printf("Enter the name of the person 1\n");
    scanf("%s", p[0].name);
    printf("Enter the age of person 1\n");
    scanf("%d", &p[0].age);
    printf("Enter the height of the person 1\n");
    scanf("%f", &p[0].height);
    printf("-----------------------------------------------\n");
    //////////////////////////////get the name,age and height of the person 2
    printf("Enter the name of the person 2\n");
    scanf("%s", p[1].name);
    printf("Enter the age of person 2\n");
    scanf("%d", &p[1].age);
    printf("Enter the height of the person 2\n");
    scanf("%f", &p[1].height);
    printf("-----------------------------------------------\n");
    /////////////////display the information
    printf("Name of the person 1 is %s\n", p[0].name);
    printf("Age of the person 1 is %d\n", p[0].age);
    printf("Height of the person 1 is %0.4f\n", p[0].height);
    printf("-----------------------------------------------\n");
    printf("Name of the person 2 is %s\n", p[1].name);
    printf("Age of the person 2 is %d\n", p[1].age);
    printf("Height of the person 2 is %0.4f\n", p[1].height);
    printf("-----------------------------------------------\n");
}
