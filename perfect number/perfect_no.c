#include<stdio.h>

int main(){
	int n,sum,i, temp;
	
	printf("enter the value of n: ");
	scanf("%d",&n);
	
	temp = n;
	while (n > 0){
		i=n%10;
		sum = sum + i;
		n=n/10;
	}
	if(sum == temp){
		printf("It is a perfect no.");
	}
	else{
		printf("It is not perfect no.");
	}
}
