/* 

Name            P8_1.c
Description     Print a reversed array from input
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {
	
	int a[10],i;
	
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	printf("\n\nReversed Order: \n");
	for(i=9; i>=0; i--){
		printf("%d ", a[i]);
	}
	printf("\n\n");

	return 0;
}
