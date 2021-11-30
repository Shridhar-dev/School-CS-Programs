#include<stdio.h>

int main(){
	int i=1,n,e=0;
	
	printf("enter the value of n: ");
	scanf("%d",&n);
	
	for(i=1;n > 0; i=i+2){
		e=e+i;
		n--;
	}
	printf("\n%d",e);
	
}
