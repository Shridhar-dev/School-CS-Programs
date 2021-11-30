#include<stdio.h>

int main(){
	int i=7,n,e=0;
	
	printf("enter the value of n: ");
	scanf("%d",&n);
	
	while(n > 0){
		printf("\n%d",i);
		e=e+i;
		i = i* 10 + 7;
		n--;
	}
	printf("\n%d",e);
}
