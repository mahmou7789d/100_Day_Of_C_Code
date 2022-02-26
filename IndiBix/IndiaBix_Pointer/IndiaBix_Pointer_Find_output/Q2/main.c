
/*
Author: Mahmoud Hamed
*/
#include<stdio.h>

int main()
{
    int i=3, *j, k;
    j = &i;
    printf("%d\n", i**j*i+*j);  //3*3*3+3=30
    return 0;
}


/*
 *   j=&i implies *j=i;
 *   *j=3
 *   i**j=3*3=9
 *   (i**j)*i=9*3=27
 *   (i**j*i)+*j=27+3=30
 *
*/
