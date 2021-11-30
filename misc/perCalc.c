#include<stdio.h>

int main(){
	int rollno, maths, science, english, total, per;
	
	printf("Enter your rollno and marks: ");
	scanf("%d%d%d%d", &rollno,&maths,&science,&english);
	
	total = science + maths + english;
	
	per = total*100/300;
	
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
