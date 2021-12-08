#include<stdio.h>

int main() {
	
	int a, i, tmp;
	int result = 0;
	
	printf("\n\nEnter the limit : ");
	scanf("%d",&a);
	
	for(i=0; i <= a; i++) {

		tmp = i*i;
		result += tmp;

	}
	
	printf("\n\n%d\n\n", result);

	return 0;
}
