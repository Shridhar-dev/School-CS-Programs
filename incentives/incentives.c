#include<stdio.h>

int main(){
	float sales,incentive;
	
	printf("Enter your sales: ");
	scanf("%f", &sales);
	
	
	if(sales <= 10000){		
		incentive = sales * 10 / 100;
		printf("Your incentive is %f", incentive);
	}
	else{
		if(sales < 20000){
			incentive = sales * 20 / 100;
			printf("Your incentive is %f", incentive);
		}
		else{
			if(sales < 30000){
				incentive = sales * 25 / 100;
				printf("Your incentive is %f", incentive);
			}
			else{
				if(sales > 30000){
					incentive = sales * 30 / 100;
					printf("Your incentive is %f", incentive);
				}
			}
		}
		
	}
	
}
