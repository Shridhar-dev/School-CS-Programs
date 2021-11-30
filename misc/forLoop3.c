#include<stdio.h>
int main(){
	int i,n,sum;
	printf("enter the value of n \n");
	scanf("%d", &n);
	
	for(i=0; i<=10; i=i+1){
		printf("\n%d x %d = %d",n,i,n*i);
	}
	
}
