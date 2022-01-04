/* 

Name            PM1.c
Description     Grade a student with given marks from user input
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {

	int maths, ss, physics, english, computer;

	float total, percent;

	printf("\n\nEnter the marks in Maths :");
	scanf("%d",&maths);
	printf("\nEnter the marks in SS :");
	scanf("%d",&ss);
	printf("\nEnter the marks in Physics :");
	scanf("%d",&physics);
	printf("\nEnter the marks in English :");
	scanf("%d",&english);
	printf("\nEnter the marks in Computer :");
	scanf("%d",&computer);

	total = maths + ss + physics + english + computer;
	percent = total/5;

	if (maths<30 || ss<30 || physics<30 || english<30 || computer<30)
		return printf("\nFAIL\n\n");
	
	if(percent > 80){
		printf("\nDISTINCTION\n");
	}
	else if(percent > 60){
		printf("\nFIRST CLASS\n");
	}
	else if(percent > 40){
		printf("\nSECOND CLASS\n");
	}
	else if(percent > 30){
		printf("\nPASS CLASS\n");
	}
	else {
		printf("\nFAIL\n\n");
	}
	
	printf("\nPercentage = %f\n\n", percent);

	return 0;
}
