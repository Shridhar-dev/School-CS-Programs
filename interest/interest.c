#include<stdio.h>

int main(){
	float p, n, r, SI;
	
	printf("Enter p, n, r :");
	scanf("%f%f%f",&p, &n, &r);
	
	SI= (p*n*r)/100;
	
	printf("The SI calculated is %f", SI);
	
}
