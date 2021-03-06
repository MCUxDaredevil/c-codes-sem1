/* 

Name            P3_2.c
Description     Convert given temperature from Fahrenheit to Celsius or vice versa
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {

	int choice;
	float a, temp;
	
	printf("\n\n1. F to C\n2. C to F");
	printf("\n\nEnter your choice : ");
	scanf("%d", &choice);
		
	if(choice == 1) {
		printf("\n\nEnter the value : ");
		scanf("%f", &a);

		temp = (a-32)/1.8;
	}
	else if(choice == 2) {
		printf("\n\nEnter the value : ");
		scanf("%f", &a);
	
		temp = (1.8*a) + 32;
	}
	else {
		return printf("\nInvalid Choice!\n\n");
	}
	
	printf("\nAnswer is %f\n\n", temp);

	return 0;
}
