#include<stdio.h>

int main(){
	int n,i=1,sum=0;
	
	printf("enter the value of n: ");
	scanf("%d",&n);
	
	

	while (n > i){
		
		if(n % i == 0){
			sum=sum+i;
			printf("%d ", i);
		}
		
		i++;
	}
	if(sum == n){
		printf("\nIt is a perfect no.");
	}
	else{
		printf("\nIt is not a perfect no.");
	}
	
	
}
