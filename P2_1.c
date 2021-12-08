#include<stdio.h>

int main() {

	int a,b;
	int choice;

	printf("\n\n1. Square\n2. Rectangle\n3. Circle\n4. Triangle\n\nEnter the desired option: ");
	scanf("%d",&choice);

	if(choice == 1){
		printf("\nEnter the length of the sides: ");
		scanf("%d",&a);
		printf("\nArea of the square is %d sq units\n\n",a*a);
	}
	else if(choice == 2){
		printf("\nEnter the length : ");
		scanf("%d",&a);
		printf("\nEnter the breadth : ");
		scanf("%d",&b);
		printf("\nArea of the rectangle is %d sq units\n\n",a*b);
	}
	else if(choice == 3){
		printf("\nEnter the radius : ");
		scanf("%d",&a);
		printf("\nArea of the circle is %f sq units\n\n",3.14*a*a);
	}
	else if(choice == 4){
		printf("\nEnter the height of triangle : ");
		scanf("%d",&a);
		printf("\nEnter the length of the base : ");
		scanf("%d",&b);
		printf("\nArea of the triangle is %f sq units\n\n",0.5*a*b);
	}
	else {
		printf("\n\nINVALID INPUT\n\n");
	}

	return 0;
}
