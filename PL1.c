/* 

Name            PL1.c
Description     Print the sum of inverse of integers
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {
	
	int a;
	float i,sum=0;
	
	scanf("%d", &a);
	
	for(i=1; i <= a; i++) {
		sum = sum + (1/i);
	}
	
	printf("\n\n%f\n\n", sum);

	return 0;
}
