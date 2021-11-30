// Switch case
#include<stdio.h>


int main(){
	int a,b,choice;
	
	printf("Enter value of a and b: \n");
	scanf("%d%d", &a, &b);
	
	printf("Enter 1 to add enter 2 to subtract, 3 for multi and 4 for division: \n");
	scanf("%d", &choice);
	
	
	
	switch(choice){
		case 1:
				printf("the sum is %d", a+b);
				break;
		
		case 2:
				printf("the difference is %d", a-b);
				break;
				
		case 3:
				printf("the product is %d", a*b);
				break;
				
		case 4:
				printf("the divison is %d", a/b);
				break;
		default:
				printf("you have not entered correct choice");
	}
}
