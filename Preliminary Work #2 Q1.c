#include <stdio.h>

int main(){
	
	int number,i,j;
	
	printf("Please enter a number between 1 and 20:");
	scanf("%d",&number);
	
	if(number<=1 || number>=20){
		printf("Try it again with a number between 1 and 20.\n");
		return 0;
	}
	
	for(i=1;i<=number;i++){
		if(number%2==0){
			for(j=1;j<=i;j++){
				printf("%d ",j);
			}	
		}
	     else {
	     	for(j=0;j<i;j++){
	     		printf("%d ",number-j);
			 }
		 }
		
		printf("\n");
	}
	return 0;
}
