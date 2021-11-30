#include<stdio.h>

int main(){
	
	int n, i;
	
	printf("enter n");
	scanf("%d", &n);
	
	i=0; //initialization
	while(i<=n){  //condition
		printf("\n %d", i); //increment
		i++;
	}
	
	printf("\n .........");
	
	while(n>=0){  //condition
		printf("\n %d", n); //increment
		n--;
	}
	
}
