/* 

Name            P9_2.c
Description     Finding the length of a string without using library functions
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>
#include<string.h>

int main(){

	int length;
	char string[100];
	
	printf("\n\nEnter the string: \n");
	gets(string);
	
	for(length=0; length<100; length++){
		if(string[length] == '\0'){
			break;
		}
	}
	
	printf("\n\nThe length of the string is %d\n\n", length);

	return 0;
}