/* 

Name            P5_3.c
Description     Find the factorial of a given positive integer
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {

	int a, i, fact=1;
	
	printf("\n\nEnter a number : ");
	scanf("%d", &a);
	
	if(a < 0){
		return printf("Negative integers dont have factorials")
	}
	
	for(i=a; i>0; i--) {
		fact *= i;
	}
	
	printf("\n\nThe factorial of %d is %d\n\n", a, fact);

	return 0;
}
