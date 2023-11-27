// operators in c
#include <stdio.h>
void main()
{
    int a, b, op1, op2;
    a = 36;
    b = 2;
    op1 = 9; // in binary op1=1001
    op2 = 5; // in binary op2=0101
    // arithmatic operators
    printf("addition %d\n", a + b);
    printf("substraction %d\n", a - b);
    printf("division %d\n", a / b);
    printf("multiplication %d\n", a * b);
    printf("modulus %d\n", a % b);
    printf("-------------------------------------\n");
    // relational operators
    printf("a==b %d\n", a == b);
    printf("a!=b %d\n", a != b);
    printf("a>b %d\n", a > b);
    printf("a<b %d\n", a < b);
    printf("a>=b %d\n", a >= b);
    printf("a<=b %d\n", a <= b);
    printf("-------------------------------------\n");
    // logical operators
    printf("a&&b %d\n", a && b);
    printf("a||b %d\n", a || b);
    printf("!(a&&b) %d\n", !(a && b));
    printf("----------------------------------------\n");
    // bitwise operators
    printf("op1&op2 %d\n", op1 & op2);
    printf("op1|op2 %d\n", op1 | op2);
    printf("op1^op2 %d\n", op1 ^ op2);
    printf("~op1 %d\n", (~op1));
    printf("op1>>1 %d\n", op1 >> 1);
    printf("1<<op2 %d\n", op2 << 1);
    printf("----------------------------------------\n");
    // assignment operator
    a = 22; // simple assignmemt operator assigns value of RHS to LHS
    printf("a+=10 %0d\n", a += 10);
    printf("a-=10 %d\n", a -= 10);
    printf("a*=10 %d\n", a *= 10);
    printf("a/=2 %d\n", a /= 2);
    printf("-------------------------------------------\n");
}

/*
operators: symbol used to perform operations. like + for addition operation,* for multiplication operation etc
types of operators in c:
1.arithmatic operator:- +,-,/,*,%(modulus)
2.relational operators:- ==(is equal to),!=(is not equal to),>(greater than),<(less than),>=(greater than or equal to),<=(less than or equal to)
3.logical operators:- &&(logical AND),||(logical OR),!(logical NOT) result of these operators is either true(1) or false(0)
4.bitwise operators:- &(bitwise AND),|(bitwise OR),^(bitwise XOR),~(bitwise NOT),<<(left-shift),>>(right-shift)
5.assignment operators:- =,+=,-=,*=,/=
6.other operator:- sizeof() operator,& address of operator,*ptr pointer to variable operator,?: conditional operator
*/
