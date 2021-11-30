#include<stdio.h>
int main(){
	int i,n,multi;
	printf("enter the value of n \n");
	scanf("%d", &n);
	

	

	for(i=1; i<=n; i=i+1){
		multi = multi* i;
	}
	printf("\n--------------------------------");
	printf("\n The multiplication of n nos is %d",multi);
}
