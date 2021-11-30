#include <stdio.h>

int main(){
	int i,j,n,a;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		a=i-1;
		for(j=i;j<=n-1;j++){
			a++;
			printf("%d",a);
		}
		for(j=1;j<=i;j++){
			printf("%d",n);
		}
		
		printf("\n");
	}
}
