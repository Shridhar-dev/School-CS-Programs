#include<stdio.h>

int main(){
	
	int n, i;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	i=0; 
	
	printf("\n\nPrinting Even Numbers....");
	while(i<2*n){  
		printf("\n %d", i); 
		i=i+2;
	}
	
	
	printf("\n\nPrinting Odd Numbers....");
	i=1; 
	while(i<=2*n){  
		printf("\n %d", i); 
		i=i+2;
	}
	
	
	printf("\n\nPrinting the table of n....");
	i=1; 
	while(i<=10){  
		printf("\n %d * %d = %d",n,i,n*i); 
		i++;
	}
	
	
	
	
}
