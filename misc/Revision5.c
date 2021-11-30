#include<stdio.h>

int main(){
	float i=1,e,sum=0,tn;
	int n;
	
	printf("enter the value of n: ");
	scanf("%d",&n);
	
	tn=n;
	
	for(i=1;n > 0;i=i+2){
		e = 1/i;
		sum= sum + e;
		n--;
	}
	
	
	for(i=2;tn > 0;i=i+2){
		e = 1/i;
		sum= sum - e;
		tn--;
	}
	
	printf("\n%f",sum);
}

