#include<stdio.h>

int main(){
	
	int a=0, b=1,c=0, n;
	
	
	printf("enter n: ");
	scanf("%d", &n);
	
	while(n > 0){
		printf("\n%d", b);
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	
}
