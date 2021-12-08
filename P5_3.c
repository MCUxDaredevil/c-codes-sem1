#include<stdio.h>

int main() {

	int a, i, fact=1;
	
	printf("\n\nEnter a number : ");
	scanf("%d", &a);
	
	for(i=a; i>0; i--) {
		fact *= i;
	}
	
	printf("\n\nThe factorial of %d is %d\n\n", a, fact);

	return 0;
}
