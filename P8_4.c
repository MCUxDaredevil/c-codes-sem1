#include<stdio.h>

int main(){

	int i,j,tmp;
	int n = 10;

	int a[] = {6,2,4,5,7,8,9,3,1,0};
	
	for (i=0 ; i < n-1; i++){
		for (j=0 ; j < n-1; j++){
			if (a[j] > a[j+1]){
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	
	printf("\nSorted Array:\n");
	for(i=0;i<n;i++){
		printf("%d  ", a[i]);
	}
	return 0;
}