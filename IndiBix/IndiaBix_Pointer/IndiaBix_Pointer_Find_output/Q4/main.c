/*
    Author : Mahmoud Hamed
*/

#include<stdio.h>

int main()
{
    const char str[20] = "Hello";
    char *const p=str;        // we can't change the value of pointer (p++ --> increment of read-only variable 'p' is error)
    printf("1)%s\n", p);        // str and p have the same printed value
    *(p+1)='M';               // but we can change the value which constant pointer point to it
    // *(p+1)  there is no error because there is no assignment so the value of pointer remain constant
    // it's only be incremented before dereferencing the pointer
    // *(p++)= 'M'; ------> Error
    // printf("%s\n", p++);  -----> Error
    //The expression *p++ is treated as *(p++) as the precedence of postfix ++ is higher than *
    // but error here is because post increment is assignment so the value of pointer will be changed
    // and this is illegal for Constant Pointers
    printf("2)%s\n", p);        // the output is Mello
    printf("3)%s\n", p+1);      // Steps with constant pointers using Arithmetic Operators not post increment
    const char *s=str;
    printf("4)%s\n",s);
    // *(s+1)='M';  -----> Error
    // we can't change the constant value which is pointed using pointers to constant9
    printf("5)%s\n",++s);       //Steps with pointer to constant using pre increment
    printf("6)%s\n",s++);       //Steps with pointer to constant using post increment
    printf("  %s\n",s);         //in this line we will saw the effect of post increment
    printf("7)%s\n",s+1);       //Steps with pointer to constant using Arithmetic Operators
    return 0;
}


/**
A constant pointer :

A constant pointer in C cannot change the address of the variable to which it is pointing, i.e.,
the address will remain constant. Therefore, we can say that if a constant pointer is pointing to some variable,
then it cannot point to any other variable.

int *const ptr;  //Declaration of a constant pointer

******************************************************************************
Pointer to constant :

A pointer to constant is a pointer through which the value of the variable that the pointer points cannot be changed.
The address of these pointers can be changed, but the value of the variable that the pointer points cannot be changed.

const int* ptr;  //Declaration of a Pointer to constan
******************************************************************************

//increment Using increment operator.
        int fixedValue = 4;             // The global variable
        int incrementer () {
          return fixedValue ++;
        }
        int newValue = incrementer();   // Should equal 5
        printf("%s",fixedValue);        // Should print 5
***********************************************************************
//incrementUsing addition operator.
        int fixedValue = 4;              // The global variable
        int incrementer () {
          return fixedValue + 1;         // the increment is done in this line only
        }
        int newValue = incrementer();    // Should equal 5
        printf("%s",fixedValue);         // Should print 4

*/
