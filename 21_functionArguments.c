// pass by value and pass by reference
#include <stdio.h>
void call_by_value(int a, int b)
{
    a = 240;
    b = 200;
}
void call_by_reference(int *ptra, int *ptrb)
{
    *ptra = 240; // dereferencing operator to assign value at the given address location
    *ptrb = 200;
}
void main()
{
    int a, b; // a and b are the local variables of main function,no one can change it unless passed by reference
    a = 120;
    b = 100;
    call_by_value(a, b); // copy of a and b is passed to function,therefore cannot change
    printf("value of a and b after passing through call by value a=%d and b=%d\n", a, b);
    call_by_reference(&a, &b); // address where these two variables are stored is passed,therefore function can change the value
    printf("value of a and b after passing through call by reference a=%d and b=%d", a, b);
}

/*
1. Actual parameters:-> when a function is called ,the values that are passed in the call are called actual parameters
      ex-> sum(12,23);//function call 12 and 23 are called actual parameters
           sum(a,b);//function call a and b are called actual parameters

2. formal parameters:-> they are local variables which are assigned values from the arguments when the function is called
      ex:- int sum(int a,int b)//here a and b are formal parameters
      {
        //code to be executed;
      }
      void main()
      sum(12,23);//function call, a gets 12 and b gets 23

types of function call in c:-
in c,we can call a function in two different ways,based on how we specify the arguments
and these two ways are
1. call by value:-
   1. when we call a function by value ,it means that are passing the values of the arguments
      which are copied into the formal parameters of the function
   2. which means that the original values remain unchanged and only the parameters inside the function changes
2. call by reference
   1. the call by reference method of passing arguments to a c function copies the address of the arguments into the formal parameters
   2. address of the actual arguments are copied and then assigned to the corresponding formal arguments
*/
