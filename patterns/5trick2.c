#include<stdio.h>

int main(){
	int n,i,j,p;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		p=i;
		for(j=1;j<=n;j++){
			printf("%d",p);
			if(p<5 )
				p++;
		}	
		printf("\n");
	}
}
