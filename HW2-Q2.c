#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Hunerler (float itemPrice,float* donationTotal ,float* profitTotal);

int main(){
	
 float itemPrice,donationTotal=0,profitTotal=0;
 int i;
 srand(time(NULL));

for(i=0;i<50;i++){ 
  float number=((float)rand()/RAND_MAX)*20;
  Hunerler(number,&donationTotal,&profitTotal);
  printf("Item is $%f.\n",number);
}
	printf("Donation is $%f.\n",donationTotal);
	printf("Profit is $%f.",profitTotal);
	
	return 0;
}

void Hunerler(float itemPrice,float*donationTotal,float*profitTotal){
	float num1=0,num2=0;
	
	num1= itemPrice-floor(itemPrice);
	num2=floor(itemPrice);
	*donationTotal+=num1;
	*profitTotal+=num2;
	
	
}






/*
int main(void){
	
int i;
float number;

srand(time(NULL));

for(i=0;i<50;i++){ 
  number=((float)rand()/RAND_MAX)*20;
  printf("%f\n",number);
}
system("pause");
} 
*/
