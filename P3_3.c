/* 

Name            P3_3.c
Description     Determine whether the given number is odd or even
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {

	int a;

	printf("\n\nEnter the number : ");
	scanf("%d", &a);

	if(a%2 == 0) { printf("\nEVEN\n\n"); }
	else { printf("\nODD\n\n"); }

	return 0;

}
