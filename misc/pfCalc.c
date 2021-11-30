#include<stdio.h>

int main(){
	int empid, basic; 
	float pf, ta, da;
	
	printf("enter the empid and basic: ");
	scanf("%d%d", &empid, &basic);
	

	
	if(basic >= 10000){
		
		pf = basic*12/100;
		ta = basic*45/100;
		da = basic*56/100;	
			
		printf("Your pf is %.2f \n",pf);
		printf("Your ta is %.2f \n",ta);
		printf("Your da is %.2f \n",da);
	}
	else{
		
		pf = basic*14/100;
		ta = basic*40/100;
		da = basic*36/100;	
			
		printf("Your pf is %.2f \n",pf);
		printf("Your ta is %.2f \n",ta);
		printf("Your da is %.2f \n",da);
		
	}
}
