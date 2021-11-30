#include<stdio.h>

int main(){
	float side, calc;
	int choice;
	
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("Enter length of side: ");
			scanf("%f", &side);
			
			calc = side*side*side;
			printf("Volume of cube is %f", calc);
			break;
		case 2:
			printf("Enter length of side: ");
			scanf("%f", &side);
			
			calc = 6*side*side;
			printf("Total surface area of cube is %f", calc);
			break;
		default:
			printf("Please enter correct choice");
	}
}
