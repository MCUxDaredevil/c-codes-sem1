/* 

Name            PL2.c
Description     Print the reverse of a given number
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {
	
	int a,i,rev=0;
	
	scanf("%d", &a);
	printf("\n\n");
	
	for(i=1; a!=0; i++) {
		rev = (rev*10) + (a%10);
		a /= 10;
	}

	printf("%d\n\n",rev);

	return 0;
}
