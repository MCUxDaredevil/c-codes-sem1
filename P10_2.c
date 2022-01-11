/*

Name			P10_2.c
Description		Toggle the case of a given string
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
	int i;
	
	printf("\n\nEnter the string:\n");
	gets(str);
	
	for(i=0; i<100; i++){
		if(str[i] == '\0')
			break;
		
		if(str[i]>64 && str[i]<91)
			str[i] += 32;
		else if(str[i]>96 && str[i]<123)
			str[i] -= 32;
	}
	
	printf("\nToggle case string:\n");
	for(i=0; i<100; i++){
		if(str[i] == '\0')
			break;
		
		printf("%c",str[i]);
	}

	printf("\n");
	return 0;
}