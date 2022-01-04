/* 

Name            Diamond.c
Description     Create a diamond of specified size by user input
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include <stdio.h>

int main()
{
	int a,i,j,k;

	scanf("%d",&a);
	if(a%2==0 || a<1) {return printf("Only odd positive inputs are allowed"); }
	printf("\n\n");

	for(i=1; i<=((a+1)/2); i++) {
		j=(2*i)-1;

		for(k=0;k<((a-j)/2);k++){
			printf(" ");
		}

		for(j=0;j<((2*i)-1);j++){
			printf("*");
		}
		printf("\n");
	}
	
	a -= 2;
	
	for(i=((a+1)/2); i>0; i--) {
		j=(2*i)-1;

		for(k=0;k<=((a-j)/2);k++){
			printf(" ");
		}

		for(j=0;j<((2*i)-1);j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}