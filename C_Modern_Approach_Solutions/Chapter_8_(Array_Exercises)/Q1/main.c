/*
Author: Mahmoud Hamed
Solution to "C Programming A Modern Approach" chapter 8, exercise 1

Q: We discussed using the expression sizeof(a) / sizeof(a[0]) to calculate the number
   of elements in an array. The expression size(a) / sizeof(t), where t is the type
   of a's elements, would also work, but it's considered an inferior technique. Why?

A: If the type of a changes in a large program the source will have to be modified
   to support the change of type.


   Note :
   "sizeof" operator gives the size of the array in bytes so,
   to get the length of the array we divide the size of the array with the size of the first element.
*/
#include <stdio.h>

int main()
{
    //Initialize array
    int arr[] = {1, 2, 3, 4, 5};

    //Number of elements present in an array can be calculated as follows:
    int length   = sizeof(arr)/sizeof(arr[0]);    // if the data type of array changed, this line won't have to be modified
    int Length_1 = sizeof(arr)/sizeof(int);       // if the data type of array changed, this line will have to be modified
    int Length_2 = sizeof(arr)/sizeof(double);    // if the data type of array changed, this line will have to be modified
    printf("Number of elements present in given array: %d\n", length);
    printf("Number of elements present in given array: %d\n", Length_1);
    printf("Number of elements present in given array: %d\n", Length_2);
    return 0;
}
