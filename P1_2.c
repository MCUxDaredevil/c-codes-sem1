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
