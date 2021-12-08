#include<stdio.h>

int main() {
	
	int a,i,rev=0;
	
	scanf("%d", &a);
	printf("\n\n");
	
	for(i=1; a!=0; i++) {
//		printf("%d",a%10);
		rev = (rev*10) + (a%10);
		a /= 10;
	}

	printf("%d\n\n",rev);

	return 0;
}
