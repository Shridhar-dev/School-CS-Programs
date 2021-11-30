#include<stdio.h>

int main(){

	int n,i, x=1,y=0,z;
	
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	for(i=1; i <=n ; i++){
		printf("\n%d",y);
		z=y;
		y=y+x;
		x=z;
	}
}
