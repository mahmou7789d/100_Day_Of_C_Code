/*
    Author: Mahmoud Hamed
    in this code we will realize the importance of precedence Table and the priority between operators and the steps in pointers
*/

#include<stdio.h>

int main()
{
    int x=30, *y, *z;
    y=&x;           /* Assume address of x is 500 and integer is 4 byte size */
    z=y;            //z=y=500
    printf("x=%d, y=%d, z=%d\n", x, y, z);
    *(y++);         //504
    *(z++);         //504
    *y++=*z++;      //508---->//so post increment is done first the the dereference pointer is performed and Assignment operator
    x++;            //31
    printf("x=%d, y=%d, z=%d\n", x, y, z);
    y -=2;          //500
    z -=2;          //500
    (*z)++;         //31
    x++;            //32
    printf("x=%d, y=%d, z=%d\n", x, y, z);
    return 0;
}

/*
In ++*y the value the pointer is pointing to will be incremented
Bit, in *y++ the address will be incremented and it is given as 4 bytes for integer and address is 500 given. So
In *y ==> y=500 ==>*y++ ==> y=504
and x++=31
***********************************************************
*y++ means *(y++) -----> if we want to increase the address by step
if you want to increase value which y point to it then(*y)++ is correct syntax....
******************************************
 operators with the highest precedence appear at the top of the table,
 those with the lowest appear at the bottom. Within an expression, higher precedence operators will be evaluated first.

 precedence Table
    Category	       Operator	                        Associativity
    Postfix	        () [] -> . ++ - -	                Left to right     //so post increment is done first the the dereference pointer is performed
    Unary       	+ - ! ~ ++ - - (type)* & sizeof 	Right to left
    Multiplicative	* / %	                            Left to right
    Additive	    + -	                                Left to right
    Shift	        << >>	                            Left to right
    Relational	    < <= > >=	                        Left to right
    Equality	    == !=                           	Left to right
    Bitwise AND	    &                               	Left to right
    Bitwise XOR 	^	                                Left to right
    Bitwise OR	    |	                                Left to right
    Logical AND	    &&	                                Left to right
    Logical OR	    ||	                                Left to right
    Conditional	    ?:	                                Right to left
    Assignment	    = += -= *= /= %=>>= <<= &= ^= |=	Right to left
    Comma	        ,                                   Left to right

*/
