#include<stdio.h>

int main() {
	
	int a;
	float i,sum=0;
	
	scanf("%d", &a);
	
	for(i=1; i <= a; i++) {
		sum = sum + (1/i);
	}
	
	printf("\n\n%f\n\n", sum);

	return 0;
}
