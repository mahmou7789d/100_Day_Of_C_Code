#include <stdio.h>
#include <stdlib.h>

/*
 * Write a function check(x, y, n) that returns 1 if both x and y fall between 0
 * and n - 1, inclusive. The function should return 0 otherwise. All variables are int.
 */

int Variables_check(int x,int y,int n);
int main()
{
    int Num1,Num2,n,Result;
    printf("Please Enter Your Numbers,Sir.....\n");
    scanf("%d%d%d", &Num1, &Num2, &n);
//->scanf("%d%d%d\n", &Num1, &Num2, &n);   in this case the compiler will force you to input 4 numbers not 3
    Result = Variables_check(Num1,Num2,n);
    printf("%d",Result);
    return 0;
}
int Variables_check(int x,int y,int n)
{
    int returned_value = 0;
    if ((x >= 0 && x <= n-1)&&(y >= 0 && y <= n-1))
        returned_value =1;
    return returned_value;
}
