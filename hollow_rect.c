/* 

Name            hollow_rect.c
Description     Create a hollow rectangle of specified length and height dimensions by user input
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {
	
	int a,b,i,j;
	
	scanf("%d %d", &a, &b);
	printf("\n\n");
	
	for(i=1; i<=a; i++) {
		
		if(i==1 || i==a) {
			for(j=1; j<=b; j++) {
				printf("*");
			}
		}
		else {
			for(j=1; j<=b; j++) {
				if(j==1 || j==b) {
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