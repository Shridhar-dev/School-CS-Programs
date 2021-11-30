#include<stdio.h>
int main(){
	int fligthno, dist, fees;

	printf("enter the of flightno and distance travelled:");
	scanf("%d%d",&fligthno, &dist);
	
	
	
	if(dist >=5000){
		printf("Your fees are: Rs%d",8000);
	}
	else{
		
		if(dist >=4000){
			printf("Your fees are: Rs%d",5000);
		}
		else{
			if(dist >=2000){
				printf("Your fees are: Rs%d",3000);
			}
			else{
				printf("Your fees are: Rs%d",2500);
			}	
		}
		
	}
	
	
}
