#include<stdio.h>
int main(){
	int i;
	//all
	for(i=0;i<=50;i=i+1){
		printf("%d\n",i);
	}
	for(i=50;i>=1;i=i-1){
		printf("%d\n",i);
	}
	
	printf("\n\n");
	//even
	for(i=0;i<=50;i=i+2){
		printf("%d\n",i);
	}
	for(i=50;i>=1;i=i-2){
		printf("%d\n",i);
	}
	
	printf("\n\n");
	//odd
	for(i=1;i<=50;i=i+2){
		printf("%d\n",i);
	}
	for(i=49;i>=1;i=i-2){
		printf("%d\n",i);
	}
}
