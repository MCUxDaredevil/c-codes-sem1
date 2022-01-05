/* 

Name            P8_3.c
Description     Insert or Delete an element from an array at desired index
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>
#include<stdlib.h>

int main(){

	int choice;
	int i, index, value, len;
	
	printf("\nEnter the size of the array: \n");
	scanf("%d", &len);
	
	int a[len];
	
	printf("\nEnter the values for the array: \n");
	for(i=0; i<len; i++){
		scanf("%d", &a[i]);
	}
	printf("\n\n");
	for(;;){
		#ifdef __linux__
			system("clear");
		#elif _WIN32
			system("cls");
		#endif
		printf("Enter the desired index to edit: ");
		scanf("%d", &index);
		if(index >= len)
			continue;
	
		printf("\n1. Insert element\n2. Delete element\n\nWhat operation would you like to perform: ");
		scanf("%d", &choice);
	
		switch(choice){
			case 1:
				printf("\nEnter the value to insert at the index: ");
				scanf("%d", &value);
			
				for(i=len; i>index ; i--){
					a[i] = a[i-1];
				}
				a[index] = value;
				len++;
				break;
			case 2:			
				for(i=index; i<len-1; i++){
					a[i] = a[i+1];
				}
				len--;
				break;
			default:
				return printf("\n\nInvalid Input\n\n");
		}
	
		printf("\n\nUpdated array: \n");
		for(i=0; i<len; i++){
			printf("%d ", a[i]);
		}
		
		printf("\n\nWould you like to execute it again?(y/n) ");
		scanf(" %c", &choice);
		if(choice == 'n')
			return printf("\n\n");
	}	
}
