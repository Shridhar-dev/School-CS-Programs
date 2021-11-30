#include<stdio.h>

int main(){
	int sumA=0, sumB=0, n=2,i=0, b1="[]", b2="[]", b3="[]", b4="[]", b5="[]", b6="[]", b7="[]", b8="[]", b9="[]";
	
	
	while(n > 0){
		printf("Player 1 plays now: ");
		
		scanf("%d",&i);
		
		if(i == 1){
			b1="X";
		}
		else{
			if(i == 2){
				b2="X";
			}
			else{
				if(i==3){
					b3="X";
				}
				else{
					if(i==4){
						b4="X";	
					}
					else{
						if(i==5){
							b5="X";	
						}
						else{
							b6="X";
						}
					}
				}
			}
		}
		
		sumA = sumA + i;
		
		printf("\n%s %s %s \n %s %s %s \n %s %s %s\n",b1,b2,b3,b4,b5,b6,b7,b8,b9);
		
		i=0;
		
		printf("Player 2 plays now: ");
		
		scanf("%d",&i);
		
		if(i == 1){
			b1="X";
		}
		else{
			if(i == 2){
				b2="O";
			}
			else{
				if(i==3){
					b3="O";	
				}
				else{
					if(i==4){
						b4="O";	
					}
					else{
						if(i==5){
							b5="O";	
						}
						else{
							b6="O";
						}
					}
				}
			}
		}
		
		printf("\n%s %s %s \n %s %s %s \n %s %s %s\n",b1,b2,b3,b4,b5,b6,b7,b8,b9);
		
		sumB = sumB + i;
		
		i=0;
		
		n--;
	}
	
	while (n == 0){
		i=0;
		printf("Player 1 plays now: ");
			
		scanf("%d",&i);
		
		if(i == 1){
			b1="X";
		}
		else{
			if(i == 2){
				b2="X";
			}
			else{
				if(i==3){
					b3="X";
				}
				else{
					if(i==4){
						b4="X";	
					}
					else{
						if(i==5){
							b5="X";	
						}
						else{
							b6="X";
						}
					}
				}
			}
		}
		
		printf("\n%s %s %s \n %s %s %s \n %s %s %s\n",b1,b2,b3,b4,b5,b6,b7,b8,b9);
		
		sumA = sumA + i;
		
		if(sumA == 6 || sumA == 15 || sumA == 24 || sumA == 12 || sumA == 18) {
			printf("%d \n", sumA);
			printf("Player 1 wins!");
			n = 1;
		}
		else{
			i=0;
			printf("Player 2 plays now: ");
			scanf("%d",&i);
			
			if(i == 1){
				b1="O";
			}
			else{
				if(i == 2){
					b2="O";
				}
				else{
					if(i==3){
						b3="O";	
					}
					else{
						if(i==4){
							b4="O";	
						}
						else{
							if(i==5){
								b5="O";	
							}
							else{
								b6="O";
							}
						}
					}
				}
			}
			
			sumB = sumB + i;
			printf("%d",sumB);
			
			if(sumB == 6 || sumB == 15 || sumB == 24 || sumB == 12 || sumB == 18) {
				printf("%d \n", sumB);
				printf("Player 2 wins!");
				n = 1;
			}		
		}
	}

}
