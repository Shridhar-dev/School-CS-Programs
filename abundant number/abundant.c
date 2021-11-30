#include<stdio.h>

int main(){
	int i=1,n,sum;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	while(n > i){
		if(n % i == 0){
			printf("\n%d",i);
			sum = sum+i;
		}
		i++;
	}
	
	if(sum > n){
		printf("\n\n%d is an abundant number",n);
	}
	else{
		printf("\n\n%d is not an abundant number",n);
	}
}
