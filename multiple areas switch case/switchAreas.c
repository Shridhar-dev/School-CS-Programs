#include<stdio.h>

int main(){
	float side, calc;
	int choice;
	
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("Enter the radius of circle: ");
			scanf("%f", &side);
			
			calc = 3.14 * side*side;
			printf("Volume of cube is %f", calc);
			break;
		case 2:
			printf("Enter length of side: ");
			scanf("%f", &side);
			
			calc = side*side;
			printf("The area of square is %f", calc);
			break;
			
		case 3:
			printf("Enter radius of sphere: ");
			scanf("%f", &side);
			
			calc = 4*3.14*side*side;
			printf("The area of sphere is %f", calc);
			break;
				
		default:
			printf("Please enter correct choice");
	}
}
