/*

Name
Description
Author			MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page		https://github.com/MCUxDaredevil/c-codes-sem1
Support URL		https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License 		MIT

*/

#include<stdio.h>

int main() {

	char s1[100],s2[100],s3[100];
	int i,j;
	
	printf("\n\nEnter the first string:\n");
	gets(s1);
	
	printf("\nEnter the second string:\n");
	gets(s2);
	
	for(i=0; i<100; i++){
		if(s1[i] == '\0')
			break;
		s3[i] = s1[i];
	}

	for(j=0; j<100; j++){
		if(s2[j] == '\0')
			break;
		s3[i+j] = s2[j];
	}
	
	printf("\n\nConcatenated string:\n");
	puts(s3);

	return 0;
}