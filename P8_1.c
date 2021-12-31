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
