/* 

Name            P7_2.c
Description     Print a play button pattern with asterisks
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {

	int a, i, j, k, choice;

	printf("\n\nEnter the value : ");
	scanf("%d", &a);

	printf("\n\n1. Left\n2. Right");

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
		a--;
		for(i=a; i>=0; i--) {
			printf("\n");
			k=(a-i)+1;
			while(k>0) {
				printf(" ");
				k--;
			}
			for(j=i; j>=1; j--) {
				printf("*");
			}
		}
	}
	else if (choice == 2) {
		for(i=0; i<=a; i++) {
			printf("\n");
			for(j=1; j<=i; j++) {
				printf("*");
			}
		}
		a--;
		for(i=a; i>=0; i--) {
			printf("\n");
			for(j=i; j>=1; j--) {
				printf("*");
			}
		}
	}
	else { printf("\n\nINVALID CHOICE"); }

	printf("\n\n");

	return 0;
}
