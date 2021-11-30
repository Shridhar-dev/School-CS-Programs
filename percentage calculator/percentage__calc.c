#include<stdio.h>

int main(){
	float sub1, sub2, sub3,total;
	
	printf("Enter your subject marks:");
	scanf("%f%f%f", &sub1,&sub2,&sub3);
	total = sub1+sub2+sub3;
	// percent = (100 * total)/300
	printf("Your percentage is %2f", (100 * total)/300);
}

//WAP to take from the user basic salary of the employee
// da  = 20% * basic   ta=45*b/100
//pf=12.5basic and calculate  
