/*

Name			P10_3.c
Description		Check whether the given string is a palindrome or not
Author			MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page		https://github.com/MCUxDaredevil/c-codes-sem1
Support URL		https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License 		MIT

*/

#include<stdio.h>
#include<string.h>

int main() {

	char str[100];
	int i,len,flag=0;
	
	
	printf("\n\nEnter the first string:\n");
	gets(str);
	
	len = strlen(str);
	
	for(i=0; i<len/2; i++){
		if(str[i] != str[len-i-1])
			flag = 1;
	}
	
	flag == 0 ? printf("\nThe string is a palindrome\n\n") : printf("\nThe string is not a palindrome\n\n");

	return 0;
}