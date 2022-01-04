/* 

Name            P7_1.c
Description     Calculate the sum of squares of integers until the limit
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {
	
	int a, i, tmp;
	int result = 0;
	
	printf("\n\nEnter the limit : ");
	scanf("%d",&a);
	
	for(i=0; i <= a; i++) {

		tmp = i*i;
		result += tmp;

	}
	
	printf("\n\n%d\n\n", result);

	return 0;
}
