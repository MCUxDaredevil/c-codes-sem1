/* 

Name            P6_2.c
Description     Print the fibonacci series until the given limit
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {
	
	int a=0,b=1,i,tmp=0,limit;
	
	printf("\n\nEnter the limit : ");
	scanf("%d", &limit);

	if(limit == 1) { return printf("\n\n0\n\n"); }
	if(limit == 2) { return printf("\n\n0\n1\n\n"); }
	if(limit < 1) { return printf("\n\nINVALID INPUT!\n\n"); }

	printf("\n\n%d\n%d",a,b);

	for(i=2; i<limit; i++){
		   tmp = b;
		   b += a;
		   a = tmp;
		   
		   printf("\n%d", b);
	}
	
	printf("\n\n");
	return 0;
}
