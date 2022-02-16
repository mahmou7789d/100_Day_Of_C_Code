#include <stdio.h>
#include <stdlib.h>



 /*
 * Q1 : The following function which computers the area of a triangle contains two errors.Locate the erros and show how to fix them.
 *
 * double triangle_area(double base, height)
 * double product;
 * {
 *	product = base * height;
 *	return product / 2;
 *
 * }
 The errors are:
    1. The function parameters are ilegal due to missing types.
    2. The local variable, product, is outside the function.
*/

/*********************************Corrected function *******************************/

double triangle_area(double base, double height){
	double product;
	product = base * height;
	return product / 2;

}

int main(void){
	printf("%f", triangle_area(3, 4));
	return 0;
}
