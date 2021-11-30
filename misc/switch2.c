#include<stdio.h>


int main(){
	int choice;
	int a, b;
	float celsius, fahrenheit;
	
	
	printf("Enter 1 to  value interchaging  , 2 for calculate celsius to F: \n");
	scanf("%d", &choice);
	
	
	
	switch(choice){
		case 1:
					
	
					printf("Enter values of a and b: \n");
					scanf("%d%d", &a, &b);
					
					a = a + b;
					b = a - b;
					a=a-b;
					
					printf("Value of a is %d and b is %d", a,b);
					break;
		
		case 2:
				
				printf("Enter temperature in celsius: ");
				scanf("%f",&celsius);
				
				fahrenheit = (celsius * 9/5) + 32;
				printf("Temperature in Fahrenheit is %f", fahrenheit);
				break;
				
		
		default:
				printf("you have not entered correct choice");
	}
}
