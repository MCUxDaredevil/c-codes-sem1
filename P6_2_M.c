#include<stdio.h>
#include<math.h>

int main() {
	
	int i,limit;
	double a;
	
	printf("\n\nEnter the limit : ");
	scanf("%d", &limit);

	if(limit < 1) { return printf("\n\nINVALID INPUT!\n\n"); }

	for(i=1; i<=limit; i++){
		   
		   a = (1/sqrt(5))*(pow(((1+sqrt(5))/2),i)-pow(((1-sqrt(5))/2),i));
		   
		   printf("\n%d", (int)a);
	}
	
	printf("\n\n");
	return 0;
}
