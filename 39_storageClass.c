// storage class in c
#include <stdio.h>
int a; // external storage class
int main()
{
    int b;          // automatic storage class
    static float f; // static storage class
    register int r; // register storage class
    printf("default value of a=%d\n", a);
    printf("default value of b=%d\n", b);
    printf("default value of f=%0.4f\n", f);
    printf("default value of r=%d\n",r);
    return 0;
}

/*
1.a storage class defines scope,default value,lifetime of the variable.
  1.scope:-means where will this variable available or can be used
  2.default value:-means if we donot define value of the variable explicitly then what will be the initial value
  3.lifetime:-life of a variable
2.storage classes in c are
  1.automatic variables:auto storage class
    1.scope:-local to the function body they are defined in.
    2.default value:-garbage value(a random value)
    3.lifetime:-till the end of function block they are defined in.
    4. syntax:-auto int a; or int a;
  2.external variables:external storage class
    1.they are same as global variables
    2.scope:-global to the program they are defined in
    3.default initial value:-0
    4.lifetime:-these variables are declared outside any function and available throughout the program.
    5.a global variable can be changed by any function in the program
    6.extern keyword:- it tells compiler that the variable is defined somewhere
      syntax:- extern data_type variable_name;
  3.static variables:static storage class
    1.scope:-local to the block they are defined in.
    2.default initial value:-0
    3.lifetime:-available throughout the program
    4.static variables remains under existence for use within the function for entire program run.
    5.syntax:- static data_type variable_name;
  4.register variables:register storage class
    1.scope:-local to the function they are declared in
    2.default initial value:-random value
    3.lifetime:-available till the end of function block.
    4.register variables are stored inside cpu register.
    5.syntax:- register data_type variable_name;
*/
