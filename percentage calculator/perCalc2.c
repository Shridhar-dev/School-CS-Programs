#include<stdio.h>


int main(){
	int hindi, english, maths, sci, geo , hist, total, per;
	
	printf("Enter your marks: \n");
	scanf("%d%d%d%d%d%d", &hindi, &english,  &maths, &sci, &geo, & hist);
	
	total = hindi + english + maths + sci + geo + hist;
	
	per = total * 100  / 600;
	
	if(per >= 75){
		printf("Distinction");
	}
	else{
		if(per >= 60){
			printf("First class");
		}
		else{
			if(per >= 50){
				printf("Second class");
			}
			else{
				if(per >= 35){
					printf("Pass class");
				}
				else{
					printf("Needs Improvement");
				}
			}
		}
	}
}
