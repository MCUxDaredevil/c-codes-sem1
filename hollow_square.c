/* 

Name            hollow_square.c
Description     Create a hollow square of specified size by user input
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {
	
	int a,i,j;
	
	scanf("%d", &a);
	printf("\n\n");
	
	for(i=1; i<=a; i++) {
		
		if(i==1 || i==a) {
			for(j=1; j<=a; j++) {
				printf("*");
			}
		}
		else {
			for(j=1; j<=a; j++) {
				if(j==1 || j==a) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		
		printf("\n");
	}
	
	printf("\n\n");
	return 0;
}