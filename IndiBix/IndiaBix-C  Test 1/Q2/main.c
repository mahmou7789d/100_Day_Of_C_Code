/*
 * Auther :Mahmoud Hamed Saad
 * IndiaBix - Online Test 1
 * Q2
 */

#include<stdio.h>
int main()
{
    int k, num=30;
    k = (num>5 ? (num <=10 ? 100 : 200): 500);
    printf("%d\n", num);
    printf("%d\n", k);
    return 0;
}

/*
Step 1: int k, num=30; here variable k and num are declared as an integer type and variable num is initialized to '30'.
Step 2: k = (num>5 ? (num <=10 ? 100 : 200): 500); This statement does not affect the output of the program.
        Because we are going to print the variable num in the next statement. So, we skip this statement.
Step 3: printf("%d\n", num); It prints the value of variable num '30'
Step 3: Hence the value of num is '30'
Step 4: Hence the Value of K is   '200'

*/
