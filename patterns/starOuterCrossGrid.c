#include<stdio.h>

int main(){
	int n,i,j;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1 || i==n || j==1 || j==n || j == (n+1)/2 || i == (n+1)/2 )
				printf("*");
			else
				printf(" ");
		}	
		printf("\n");
	}
}
