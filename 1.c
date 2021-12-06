#include<stdio.h>

int main()
{
	int a,i,j;

	printf("\n\nEnter the value : ");
	scanf("%d",&a);

	for(i=1; i<(a+1); i++) {
		
		for(j=1; j<(a+1); j++) {
			(j==i) ? (printf("0")):(printf("%d",i));
		}

		printf("\n");
	}
	return 0;
}