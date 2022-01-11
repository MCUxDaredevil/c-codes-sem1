/*

Name            P9_1.c
Description     Multiply two matrices
Author          MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page     https://github.com/MCUxDaredevil/c-codes-sem1
Support URL     https://github.com/MCUxDaredevil/c-codes-sem1/issues
Discussions		https://github.com/MCUxDaredevil/c-codes-sem1/discussions
License         MIT

*/

#include<stdio.h>

int main(){

	int size,i,j,k,rowA,rowB,colA,colB,val;

	printf("\n\nEnter the row and column size of the first matrix: ");
	scanf("%d %d", &rowA,&colA);

	printf("\n\nEnter the row and column size of the second matrix: ");
	scanf("%d %d", &rowB,&colB);

	if(colA != rowB){
		return printf("\n\nGiven matrices can't be multiplied\n");
	}

	int a[rowA][colA], b[rowB][colB], c[rowA][colB];


	for(i=0; i<rowA; i++){
		printf("\nEnter the values of row %d of the first matrix: \n", i+1);
		for(j=0; j<colA; j++){
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n");

	for(i=0; i<rowB; i++){
		printf("\nEnter the values of row %d of the second matrix: \n", i+1);
		for(j=0; j<colB; j++){
			scanf("%d", &b[i][j]);
		}
	}

	for(i=0; i<=colA; i++){
		for(j=0; j<=rowB; j++){
			val = 0;
			for(k=0; k<colA; k++){
				val += (a[i][k]*b[k][j]);
			}
			c[i][j] = val;
		}
	}

	printf("\n\nMultiplication of the matrices:\n\n");
	for(i=0; i<rowA; i++){
		for(j=0; j<colB; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}