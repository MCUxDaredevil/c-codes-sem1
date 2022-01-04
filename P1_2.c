/* 

Name            P1_2.c
Description     Print the sum, difference, product, quotient and remainder of two given numbers
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {

	int a,b;

	printf("\nEnter the first value: ");
	scanf("%d",&a);
	printf("\nEnter the second value: ");
	scanf("%d",&b);
	
	printf("\nSum \t\t=\t%d",a+b);
	printf("\nDifference \t=\t%d",a-b);
	printf("\nProduct \t=\t%d",a*b);
	printf("\nDivision \t=\t%f",(float)a/b);
	printf("\nRemainder \t=\t%d\n\n",a%b);

	return 0;

}
