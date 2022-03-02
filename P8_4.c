/* 

Name            P8_4.c
Description     Use bubble sort to sort an array in ascending order
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main(){

	int i,j,tmp;
	int n;
	
	printf("\n\nEnter the size of the array: ");
	scanf("%d", &n);

	int a[n];
	
	printf("\nEnter the elements of the array:\n");
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	for (i=0 ; i < n-1; i++)
		for (j=0 ; j < n-1; j++)
			if (a[j] > a[j+1]){
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
	
	printf("\nSorted Array:\n");
	for(i=0;i<n;i++){
		printf("%d  ", a[i]);
	}
	
	printf("\n\n");
	return 0;
}