
/**
Author : Mahmoud Hamed
**/


#include<stdio.h>

void fun(void *p);
int i;                   // global variable , its initial value is 0

int main()
{
    void *vptr;
    vptr = &i;           //*vptr = 0;
    fun(vptr);           //sent the address of i to the function
    return 0;
}
void fun(void *p)
{
    int **q;             // pointer to pointer
    q = (int**)&p;       // casting void pointer to integer pointer
    printf("%d\n", **q); // dereference pointer to pointer to integer = 0
}


/**
Actually void pointer always needs to be casted whenever we perform any operation on it.

q = (int**)&p;

Here void pointer is casted into integer pointer.

**/
