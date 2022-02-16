#include <stdio.h>
int main() {
    int dividend, divisor, remainder;
    float quotient;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    for (;divisor>=0;divisor--)
    {
    // Computes quotient
    quotient = (float)dividend / divisor;
    // Computes remainder
    remainder = dividend % divisor;

    printf("Quotient of (%d) / (%d) = %f",dividend,divisor,quotient);
    printf("------>Remainder = %d\n",remainder);
    }
    return 0;
}
