#include<stdio.h>

int main() {
	int i=1,n,sum=0;
	
	printf("enter the value of n: ");
	scanf("%d",&n);
	
	printf("Factors are:");
	while(n > i){
		if(n % i == 0){
			printf(" %d",i);
			sum=sum+i;		
		}
		i++;
	}	

	if(n == sum){
		printf("\nThe number is a perfect no.");
	}
	else{
		printf("\nThe number is not a perfect no.");
	}
}
