#include<stdio.h>

int main(){
	float prodid, price, totalprice; 
	int qty;
	
	printf("enter the proid, price and qty: ");
	scanf("%f%f%d", &prodid, &price, &qty);
	
	totalprice = qty * price;
	
	if(totalprice > 5000){
		printf("You got a discount of 20! \n");
		printf("%f \n",totalprice);
		printf("-%f \n",totalprice*20/100);
		printf("--------------------------------\n");
		printf(" %f", totalprice - totalprice*20/100);
	}
	else{
		printf("You got a discount of 10! \n");
		printf("%f \n",totalprice);
		printf("-%f \n",totalprice*10/100);
		printf("--------------------------------\n");
		printf(" %f", totalprice - totalprice*10/100);
	}
}
