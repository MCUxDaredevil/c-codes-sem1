/* 

Name            Heart.c
Description     Create a heart of specified size by user input
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int flatHead(int a, int i, int j, int k, int l) {
	for(i=1; i<=(a/4); i++) {
		j=(2*i);

		for(k=((a/2)-j)/2; k>0; k--){
			printf(" ");
		}

		for(j=0;j<(2*i);j++){
			printf("*");
		}
		
		for(l=(((a/2)-j)+1); l>0; l--){
			printf(" ");
		}
		
		for(j=0;j<(2*i);j++){
			printf("*");
		}
		
		printf("\n");
	}
	
	
	for(i=((a+1)/2); i>0; i--) {
		j=(2*i)-1;

		for(k=0;k<((a-j)/2);k++){
			printf(" ");
		}

		for(j=0;j<((2*i)-1);j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

int pointHead(int a, int i, int j, int k, int l) {
	for(i=1; i<=(a/4)+1; i++) {
		j=(2*i)-1;

		for(k=((a/2)-j)/2; k>0; k--){
			printf(" ");
		}

		for(j=0;j<(2*i)-1;j++){
			printf("*");
		}
		
		for(l=(((a/2)-j)+1); l>0; l--){
			printf(" ");
		}
		
		for(j=0;j<(2*i)-1;j++){
			printf("*");
		}
		
		printf("\n");
	}
	
	
	for(i=((a+1)/2); i>0; i--) {
		j=(2*i)-1;

		for(k=0;k<((a-j)/2);k++){
			printf(" ");
		}

		for(j=0;j<((2*i)-1);j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

int main() {

	int a,i,j,k,l;

	printf("\nEnter the width: (Going above 235 will break it)\n");
	scanf("%d",&a);
	printf("\n\n");
	
	if(a%2 == 0) { return printf("Only odd inputs allowed!\n\n"); }
	if(a < 5) { return printf("Number too low!\nTry higher than 5\n\n"); }
	
	if(a%4 == 1) { flatHead(a,i,j,k,l); }
	
	else { pointHead(a,i,j,k,l); }
	
	printf("\n\n");
	return 0;
}