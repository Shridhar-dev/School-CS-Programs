#include<stdio.h>

int main(){
	int n,i,j;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
					
		printf("\n");
	}
	
}
