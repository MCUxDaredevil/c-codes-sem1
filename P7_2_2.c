#include<stdio.h>

int main() {

	int a, i, j, k, choice;

	printf("\n\nEnter the value : ");
	scanf("%d", &a);

	printf("\n\n1. Increasing\n2. Decreasing");

	printf("\n\nChoose a pattern : ");
	scanf("%d", &choice);

	if(choice == 1) {
		for(i=0; i<=a; i++) {
			printf("\n");
			for(k=1; k<=(a-i); k++) {
				printf(" ");
			}
			for(j=1; j<=i; j++) {
				printf("*");
			}
		}
	}
	else if (choice == 2) {
		for(i=a; i>=0; i--) {
			printf("\n");
			k=a-i;
			while(k>0) {
				printf(" ");
				k--;
			}
			for(j=i; j>=1; j--) {
				printf("*");
			}
		}
	}
	else { printf("\n\nINVALID CHOICE"); }

	printf("\n\n");

	return 0;
}
