#include<stdio.h>

int main(){
	int a,b,n;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	while(n > 0) {
		printf("\n%d",a);
		a+=b;
		b=a-b;
		n--;		
	}

}
