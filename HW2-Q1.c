#include <stdlib.h>
#include <stdio.h>

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

