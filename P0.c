/* 

Name            P0.c
Description     Print the sizes of different data types in bytes
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

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
