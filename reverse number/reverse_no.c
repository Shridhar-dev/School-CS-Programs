#include<stdio.h>

int main(){
	
	int n, rem;
	
	
	printf("enter n: ");
	scanf("%d", &n);
	
	while(n > 0){
		rem = n % 10; //finding remainder
		printf("%d",rem); // printing the remainder
		n=n/10; // finding the quotient
	}
	
}
