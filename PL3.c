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
