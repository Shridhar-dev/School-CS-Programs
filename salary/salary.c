#include<stdio.h>

int main(){
	float basic, da,ta,pf,total;
	int empid;
	
	printf("Enter empid and your basic salary:");
	scanf("%d%f",&empid,&basic);
	
	
	da=(20.0*basic)/100;
	ta=(45.0*basic)/100;
	pf=(12.5*basic)/100;
	total=da+ta+pf+basic;
	
	printf("\nThe epmid is \n",empid);
	printf("Your da is %.2f \n",da);
	printf("Your ta is %.2f \n",ta);
	printf("Your pf is %.2f \n",pf);
	printf("Your total salary is %.2f",total);
}
