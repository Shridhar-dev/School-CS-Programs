#include<stdio.h>

int main(){
	
	int n, rem,sum, temp;
	
	
	printf("enter n: ");
	scanf("%d", &n);
	
	temp=n;
	while(n > 0){
		rem = n % 10;
		
		rem = rem*rem*rem;
		
		sum=sum+rem;
		
		n=n/10; 
	}
	if(sum == temp){
		printf("\nIt is an armstrong no.");
	}
	else{
		printf("\nIt is not an armstrong no.");
	}
}
