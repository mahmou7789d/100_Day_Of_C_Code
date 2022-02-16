#include <stdio.h>
#include <stdlib.h>

/*
 * Write a function gcd(m, n) that calculates the greatest common divisor
 * of the integers m and n.
 */


/*
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


/*
Basic Euclidean Algorithm for GCD
The algorithm is based on the below facts.
   1- If we subtract a smaller number from a larger (we reduce a larger number), GCD doesn’t change.
      So if we keep subtracting repeatedly the larger of two, we end up with GCD.
   2- Now instead of subtraction, if we divide the smaller number, the algorithm stops when we find remainder 0.
*/
/****C program to demonstrate Basic Euclidean Algorithm*******************/
#include <stdio.h>

//  a recursive function to evaluate gcd using Euclid’s algorithm.
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b%a, a);
}

// Driver program to test above function
int main()
{
	int a = 10, b = 15;
	printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
	a = 35, b = 10;
	printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
	a = 31, b = 2;
	printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
	return 0;
}

