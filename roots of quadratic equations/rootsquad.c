#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x,y,d;
	printf("Enter a, b, c:");
	scanf("%f%f%f", &a,&b,&c);
	
	d=b*b - (4*a*c);
	
	if(d > 0){
		printf("\nroots are real and distinct \n");
		x = -b + sqrt(d) / (2*a);
		y = -b - sqrt(d) / (2*a);
	}
	else{
		if(d == 0){
			printf("\nroots are real and equal \n");
			x = -b / (2*a);
			y=x;
		}
		else{
			printf("\nroots are imaginary \n");
		}
	}
	printf("The roots of the equation are %f and %f", x , y);
	
}
