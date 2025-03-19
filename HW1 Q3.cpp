#include <stdio.h>
#include <math.h>

int main(){
	
	int homeValue, homePopularity, homeSize;
    homeValue=0;
    homePopularity=0;
    homeSize=0;
    
    printf("Enter the popularity of the land in the neighbourhood:\n");
    scanf("%d",&homePopularity);
    printf("Enter the size of the house in square meters:\n");
    scanf("%d",&homeSize);
    
    homeValue= (pow(homePopularity,3)+pow(homeSize,2))*10000;
    
    printf("Your home value is estimated as $%d.",homeValue);
    
    return 0;
	
}
