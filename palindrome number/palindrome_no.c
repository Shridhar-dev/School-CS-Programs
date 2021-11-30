#include<stdio.h>

int main(){
	int n,temp,rem,sum=0;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	temp = n;
	while(n > 0){
		rem = n % 10;
		sum = (sum * 10) + rem;
		n=n/10;
	}
	printf("\nThe reversed number is %d",sum);
	if(temp == sum){
		printf("\nIt is a palindrome");
	}	
	else{
		printf("\nIt is not a palindrome");
	}
}
