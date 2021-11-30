#include<stdio.h>

int main(){
	int a, b;
	
	printf("Enter values of a and b: \n");
	scanf("%d%d", &a, &b);
	
	a = a + b;
	b = a - b;
	a=a-b;
	
	printf("Value of a is %d and b is %d", a,b);
}
