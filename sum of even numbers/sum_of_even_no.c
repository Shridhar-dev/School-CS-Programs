#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("enter the value of n \n");
	scanf("%d", &n);
	
	for(i=1;i<=n;i=i+1){
		printf("\n%d",i);
	}
	
	printf("\nprinting even nos from 1 to n \n");
	for(i=0; i<=n; i=i+2){
		printf("\n%d",i);
		sum=sum+i;
	}
	printf("\n--------------------------------");
	printf("\nSum of even nos 1 to n is %d",sum);
}
