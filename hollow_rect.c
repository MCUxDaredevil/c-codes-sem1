#include<stdio.h>

int main() {
	
	int a,b,i,j;
	
	scanf("%d %d", &a, &b);
	printf("\n\n");
	
	for(i=1; i<=a; i++) {
		
		if(i==1 || i==a) {
			for(j=1; j<=b; j++) {
				printf("*");
			}
		}
		else {
			for(j=1; j<=b; j++) {
				if(j==1 || j==b) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		
		printf("\n");
	}
	
	printf("\n\n");
	return 0;
}