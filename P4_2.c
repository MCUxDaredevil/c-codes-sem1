#include<stdio.h>

int main() {

	int a,b,c;
	
	printf("\n\nEnter three numbers :\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if( a>=b && a>=c ) { return printf("\n\nA is max\n\n"); }
	if( b>=a && b>=c ) { return printf("\n\nB is max\n\n"); }
	if( c>=b && c>=a ) { return printf("\n\nC is max\n\n"); }
	
	printf("This should not run!");
	
	return 0;
}
