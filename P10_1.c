/*

Name			P10_1.c
Description		Count the occurences of a given character in a given string
Author			MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page		https://github.com/MCUxDaredevil/c-codes-sem1
Support URL		https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License 		MIT

*/

#include<stdio.h>
#include<string.h>

int main() {

	int count,i;
	char str[100],a;
	
	printf("\n\nEnter the string:\n");
	gets(str);
	
	printf("\nEnter the character to look for: ");
	scanf(" %c", &a);
	
	for(i=0; i<100; i++){
		if(str[i] == '\0')
			break;
		
		if(str[i] == a)
			count++;
	}
	
	printf("\n\n\'%c\' occurs %d times in the string\n\n",a,count);

	return 0;
}