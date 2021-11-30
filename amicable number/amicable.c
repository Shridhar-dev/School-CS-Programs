#include<stdio.h>

int main(){
	int i=1,n1,n2,sum1=0,sum2=0;
	
	printf("Enter the number 1 and 2: ");
	scanf("%d%d",&n1,&n2);
	
	while(n1 > i){
		if(n1 % i == 0){
			printf("%d\n",i);
			sum1 = sum1+i;
		}
		i++;
	}
	
	i=1;
	
	while(n2 > i){
		if(n2 % i == 0){
			printf("\n%d",i);
			sum2 = sum2+i;
		}
		i++;
	}
	
	
	if(sum1 == n2 && sum2 == n1 ){
		printf("\n\n%d and %d are amicable",n1,n2);
	}
	else{
		printf("\n\n%d and %d are not amicable",n1,n2);
	}
}
