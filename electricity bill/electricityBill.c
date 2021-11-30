#include<stdio.h>

int main(){
	float unit,price, surcharge;
	
	printf("Enter your electricity unit charge: ");
	scanf("%f", &unit);

	if(unit <= 100){		
		if(unit < 50){
			price = unit * 0.50;			
		}
		else{
			price = unit * 0.75;	
		}
	}
	else{
		if(unit > 100){
			if(unit > 250){
				price = unit * 1.50;
			}
			else{
				price = unit * 1.20;
			}
		}
	}
	price = price + (20 * price / 100);
	printf("the total price is %f", price);
}
