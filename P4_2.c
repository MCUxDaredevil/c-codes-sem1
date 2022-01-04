/* 

Name            P4_2.c
Description     Find out the maximum value out of the three given inputs
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {

	int a,b,c;
	
	printf("\n\nEnter three numbers :\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if( a>=b && a>=c ) { return printf("\n\nA is max\n\n"); }
	if( b>=a && b>=c ) { return printf("\n\nB is max\n\n"); }
	if( c>=b && c>=a ) { return printf("\n\nC is max\n\n"); }
	
	printf("This should not run!");
	
	return 0;
}
