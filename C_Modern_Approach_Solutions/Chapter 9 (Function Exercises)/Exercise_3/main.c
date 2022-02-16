#include <stdio.h>
#include <stdlib.h>

/*
 * Write a function gcd(m, n) that calculates the greatest common divisor
 * of the integers m and n.
 */



int gcd(int Num_1, int Num_2);

int main(void){
	printf("GCD Test (45, 30) expected 15, actual: %d", gcd(45, 30));
	printf("\nGCD Test (100, 5) expected 5, actual: %d", gcd(100, 5));
	printf("\nGCD Test (44, 144) expected 4, actual: %d\n", gcd(44, 144));
	return 0;
}

int gcd(int Num_1, int Num_2){
    int Small_Num,GCD,count;
    Small_Num = (Num_1>Num_2)? Num_1:Num_2;
    if(Num_2 != 0)
    {
        for(count = 1 ;count <=Small_Num;count++)
        {
           if(Num_1% count == 0 && Num_2% count == 0 )
           {
              GCD = count;
           }
        }
        return GCD;
    }
}

