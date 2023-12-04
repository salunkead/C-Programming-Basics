//code for employee information using structure and union
//Example-1
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    int id;
    float salary;
};

int main()
{
    struct employee e;
    strcpy(e.name, "Amit");
    e.id = 697;
    e.salary = 27565.25;
    printf("name of the employee is %s\n", e.name);
    printf("employee id of the employee is %d\n", e.id);
    printf("the salary of the employee is %0.2f\n", e.salary);
    return 0;
}

//Example-2
#include <stdio.h>
#include <string.h>
union employee
{
    char name[20];
    int id;
    float salary;
};

int main()
{
    // in union at a time we can use single member
    union employee e;
    strcpy(e.name, "Amit"); // name will get currupted
    e.id = 697;             // id will also get currupted
    e.salary = 27565.25;    // only salary will be intact,latest value will be intact
    printf("name of the employee is %s\n", e.name);
    printf("employee id of the employee is %d\n", e.id);
    printf("the salary of the employee is %0.2f\n", e.salary);
    return 0;
}
