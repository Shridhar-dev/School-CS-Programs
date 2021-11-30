#include<stdio.h>

int main(){
	int kilometers;
	
	printf("Enter the distance travelled in kilometers: ");
	scanf("%d", &kilometers);
	
	if(kilometers >= 1000){
		printf("Your fare is %d", 500);	
	}
	else{
		if(kilometers >= 500){	
			printf("Your fare is %d", 300);	
		}
		else{
			printf("Your fare is %d", 200);	
		}	
	}
	
}
