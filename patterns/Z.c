#include<stdio.h>

int main(){
	int n,i,j;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		for(j=1;j<=n;j++){
			if(i==1 || i==n || i==j )
				printf("*");
			else
				printf(" ");
		}	
		printf("\n");
	}
}
