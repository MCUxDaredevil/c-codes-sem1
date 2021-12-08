#include<stdio.h>

int main() {

	int a;

	printf("\n\nEnter the number : ");
	scanf("%d", &a);

	if(a%2 == 0) { printf("\nEVEN\n\n"); }
	else { printf("\nODD\n\n"); }

	return 0;

}
