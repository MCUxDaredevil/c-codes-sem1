/*

Name			P10_1_2.c
Description		Count the occurences of all characters in a given string
Author			MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page		https://github.com/MCUxDaredevil/c-codes-sem1
Support URL		https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License 		MIT

*/

#include<stdio.h>
#include<string.h>

int main() {

	int count,i,j,flag;
	char str[100],a,used[100];
	
	printf("\n\nEnter the string:\n");
	gets(str);

	printf("\n");
	
	for(i=0; i<100; i++){
		count = 0;
		flag = 0;
		if(str[i] == '\0')
			break;

		for(j=0; j<100; j++){
			if(used[j] == '\0'){
				used[j] = str[i];
				break;
			}
			if(str[i] == used[j])
				flag = 1;
		}
		
		if(flag == 1)
			continue;

		for(j=0; j<100; j++){
			if(str[j] == '\0')
				break;
			if(str[i] == str[j])
				count++;
		}
		printf("\n\'%c\' occurs %d times in the string\n",str[i],count);
	}
	
	printf("\n");
	return 0;
}