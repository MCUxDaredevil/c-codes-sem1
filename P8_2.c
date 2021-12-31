#include<stdio.h>

int main(){
	
	int a[5], b[5], sum[5], i;
	
	printf("\nEnter the values for the first array: \n");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	
	printf("\nEnter the values for the second array: \n");
	for(i=0; i<5; i++){
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<5; i++){
		sum[i] = a[i] + b[i];
	}
	printf("\n\nSum of the two arrays: \n");
	for(i=0; i<5; i++){
		printf("%d ", sum[i]);
	}
	printf("\n\n");

	return 0;
}
