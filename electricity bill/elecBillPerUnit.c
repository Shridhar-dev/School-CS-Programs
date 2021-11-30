#include<stdio.h>

int main(){
	float unit,price, surcharge,i;
	
	printf("Enter your electricity unit charge: ");
	scanf("%f", &unit);
	
	surcharge = unit * 20 / 100;
	
	
	for(i=0; i <= unit; i++){
	
	if(i <= 100){		
		if(i < 50){
			price =  i * 0.50 + price;
	
		}
		else{
			price =  i * 0.75 + price;
		}
	
	}
	else{
		if(i > 100){
			if(i > 250){
				price =  i * 1.50 + price;
			}
			else{
				price =  i * 1.20 + price;	
			}
		}
		
	}
}
printf("Your bill is %f", price);
}
