#include<stdio.h>

int main(){
	int a, b, c;
	
	printf("Enter values of a ,b and c: \n");
	scanf("%d%d%d", &a, &b, &c);
	/*
	if(a > b){
		if(a > c){
			printf("a is the greatest and has value of %d", a);
		}
		else{
			printf("c is the greatest and has value of %d", c);
		}
	}
	else{		
		if(b > c){
			printf("b is the greatest and has value of %d", b);
		}	
		else{
			printf("c is the greatest and has value of %d", c);
		}	
	}
	*/
	if(a > b && a > c){
		printf("a is the greatest and has value of %d", a);
	}
	else{		
		if(b > a && b > c){
			printf("b is the greatest and has value of %d", b);
		}	
		else{
			printf("c is the greatest and has value of %d", c);
		}	
	}
}
