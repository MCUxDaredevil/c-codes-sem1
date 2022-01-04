/* 

Name            PL3.c
Description     Find and print Armstrong numbers
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main() {

	int a=1,i,num,sum=0;
	
	printf("\n\n");
	
	for(;;) {
		sum = 0;
		num = a;
		while(num!=0){
			sum += ((num%10)*(num%10)*(num%10));
			num /= 10;
		}
		
		if(sum==a) {
			printf("%d\n\n",sum);
		}
		a++;
	}
	
	return 0;
}
