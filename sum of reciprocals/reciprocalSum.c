#include<stdio.h>
int main(){
	float i,n;
	float sum;
	printf("enter the value of n \n");
	scanf("%f", &n);
	

	

	for(i=1; i<=n; i=i+2){
		sum = sum + (1/i);
		
	}
	printf("\n--------------------------------");
	printf("\n The sum of n even nos is %f",sum);
}
