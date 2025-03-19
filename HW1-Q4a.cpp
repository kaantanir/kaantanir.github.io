#include <stdio.h>
#include <math.h>



	int computeHomeValue(int homePopularity, int homeSize);
	
	int main(void) {
		
		int homePopularity, homeSize;
		
		printf("Enter the popularity of your house:\n");
		scanf ("%d",&homePopularity);
		printf("Enter the size of your house in square meters:\n");
		scanf("%d",&homeSize);
		
		int homeValue = computeHomeValue(homePopularity,homeSize);
		
		printf("Your house value is estimated to be $%d",homeValue);
		
		return 0;
		
	}
	
	int computeHomeValue (int homePopularity, int homeSize) {
		
		return (pow(homePopularity,3)+pow(homeSize,2))*10000;
	}
	
	




