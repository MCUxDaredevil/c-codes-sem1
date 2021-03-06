/* 

Name            number_box.c
Description     Create a pattern of box of numbers with specified size by user input
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include <stdio.h>

int main() 
{
	int a,i,j,k	;
 
	scanf("%d", &a);
	printf("\n\n");
	
    for(i=a; i>0; i--) {
		
		for(k=a; k>i; k--){
			printf("%d ",k);
		}
		
		for(j=(2*i)-1; j>1; j--) {
            printf("%d ",i);
        }
		
		for(k=i; k<=a; k++){
			printf("%d ",k);
		}
		
		printf("\n");
		
    }
	
	for(i=2; i<=a; i++) {
		
		for(k=a; k>i; k--){
			printf("%d ",k);
		}
		
		for(j=1; j<(2*i)-1; j++) {
            printf("%d ",i);
        }
		
		for(k=i; k<=a; k++){
			printf("%d ",k);
		}
		
		printf("\n");
		
    }
	
	printf("\n\n");
    return 0;
}
