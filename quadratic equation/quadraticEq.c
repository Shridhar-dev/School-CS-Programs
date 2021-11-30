#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,d;
	float r1,r2;
	
	printf("Enter the values of a, b, c:");
	scanf("%d%d%d",&a,&b,&c);
	
	d=(b*b) - 4 * a * c;
	printf("The value of discriminant is %d\n",d);
	
	if(d == 0){
		printf("The roots are equal");	
	}
	else if(d > 0){
		printf("The roots are real");	
	}
	else{
		printf("The roots are imaginary");	
	}
	
	/*
	
		if(d > -1){
			if(d == 0){
				printf("The roots are equal");
			}
			else{
				printf("The roots are real");	
			}
		}
		else{
			printf("The roots are imaginary");	
		}
	
	*/
}
