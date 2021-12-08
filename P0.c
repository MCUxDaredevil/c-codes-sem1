#include<stdio.h>

int main()
{
	int a;
	char b;
	float c;
	short d;

	printf("\n\nInteger = %d\n", (int)sizeof(a));
	printf("Character = %d\n", (int)sizeof(b));
	printf("Float = %d\n", (int)sizeof(c));
	printf("Short = %d\n\n\n", (int)sizeof(d));

	return 0;
}
