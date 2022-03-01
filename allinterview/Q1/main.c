/**
    Author : Mahmoud Hamed
**/
#include <stdio.h>
int aaa(){printf("Hi\n");}
int bbb(){printf("hello\n");}
int ccc(){printf("bye\n");}
int main()
{
    int ( * ptr[3])(); //int (* ptr[3])() says that ptr is an array of pointers passed to function that takes no arguments and returns the type int.
    ptr[0] = aaa; //By the assignment ptr[0] = aaa; it means that the first function pointer in the array is initialized with the address of the function aaa.
    //Similarly, the other two array elements also get initialized with the addresses of the functions bbb and ccc.
    ptr[1] = bbb;
    ptr[2] =ccc;
    //Since ptr[2] contains the address of the function ccc, the call to the function ptr[2]() is same as calling ccc(). So it results in printing "bye".
    ptr[2]();
    (*ptr[2])();
    return 0;
}

/**
Array of Function Pointers
Function pointers are used in those applications where we do not know in advance which function will be called.
In an array of function pointers, array takes the addresses of different functions, and the appropriate function will be called based on the index number.
**/
