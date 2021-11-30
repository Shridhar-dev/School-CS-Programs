#include<stdio.h>
int main(){
	int prodid, price , qty;

	printf("Hello, enter the product id , its price and quantity:");
	scanf("%d%d%d",&prodid,&price,&qty);
	
	
	
	printf("The total price of #%d is %d", prodid, price*qty);
}
