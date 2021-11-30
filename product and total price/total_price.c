#include<stdio.h>
int main(){
	int prodid, price , qty;

	printf("Hello, enter the product id:");
	scanf("%d",&prodid);
	
	printf("Enter the price of #%d:", prodid);
	scanf("%d",&price);
	
	printf("Enter the quantity of #%d:", prodid);
	scanf("%d",&qty);
	
	//total__price = price*qty
	
	printf("The total price of #%d is %d", prodid, price*qty);
}
