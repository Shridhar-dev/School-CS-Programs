#include<stdio.h>

int main(){
	float maths, science,english, total, per;
	
	printf("Enter 3 sub marks\n");
	scanf("%f%f%f", &maths, &science, &english);
	
	total = english + maths + science;
	
	per = total*100/300;
	
	// <, <=, >, >= , !=, ==
	
	if( per >= 35 ){
		printf("pass");
	}
	
	else printf("Needs Improvement");
	
}
