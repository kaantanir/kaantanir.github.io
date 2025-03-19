#include <stdio.h>
#include <math.h>



void computeHomeValue(void);
	
	int main() {
		
	    computeHomeValue();
		
		return 0;
		
	}
	
	void computeHomeValue (void) {
		int homePopularity, homeSize, homeValue;
		
		printf("Enter the popularity of your house:\n");
		scanf ("%d",&homePopularity);
		printf("Enter the size of your house in square meters:\n");
		scanf("%d",&homeSize);
		
		homeValue=(pow(homePopularity,3)+pow(homeSize,2))*10000;
		
		printf("Your house value is estimated to be $%d",homeValue);
	}
	
	
