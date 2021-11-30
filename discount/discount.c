#include<stdio.h>
int main(){
	int prodid,price, qty , totalprice,finalprice;

	printf("enter the value of prodid, price and qty:");
	scanf("%d%d%d",&prodid, &price, &qty);
	
	totalprice = price * qty;
	
	if(totalprice >=5000){
		printf("Your total cost is %d \n", totalprice);
		printf("discount: %d \n", totalprice*20/100);
		finalprice = totalprice-(totalprice*20/100);
		printf("%d",finalprice);
	}
	else{
		
		if(totalprice >=3000){
			printf("Your total cost is %d \n", totalprice);
			printf("discount: %d \n", totalprice*10/100);
			finalprice = totalprice-(totalprice*10/100);
			printf("%d",finalprice);
		}
		else{
			if(totalprice >=1000){
				printf("Your total cost is %d \n", totalprice);
				printf("discount: %d \n", totalprice*8/100);
				finalprice = totalprice-(totalprice*8/100);
				printf("%d",finalprice);
			}
			else{
				printf("Your total cost is %d \n", totalprice);
				printf("discount: %d \n", totalprice*5/100);
				finalprice = totalprice-(totalprice*5/100);
				printf("%d",finalprice);
			}	
		}
		
	}
	
	
}
