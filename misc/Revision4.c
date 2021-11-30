#include<stdio.h>

int main(){
	float i=1,e,sum,sq;
	int n;
	
	printf("enter the value of n: ");
	scanf("%d",&n);
	
	while(n > 0){
		sq=i*i;
		e=i/sq;
		sum=sum+e;
		i=i+1;
		n--;
	}
	printf("\n%f",sum);
}














