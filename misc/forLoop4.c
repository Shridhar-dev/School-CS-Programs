#include<stdio.h>
int main(){
	int i,n,sum;
	printf("enter the value of n \n");
	scanf("%d", &n);
	

	

	for(i=0; i<=2*n; i=i+2){
		printf("\n%d",i);
		sum=sum+i;
	}
	printf("\n--------------------------------");
	printf("\n The sum of n even nos is %d",sum);
}
