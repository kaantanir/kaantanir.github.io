#include <stdio.h>
#include <stdlib.h>


void generate_signal(int signal[],int size);
void clean_signal(int signal [],int size);
int find_max(int signal[],int size);
int find_min(int signal[],int size);
float find_average(int signal[],int size);

int main(){
	
	srand(time(NULL));
		
	int i,sig[100], size=100;
	
	for(i=0;i<size;i++){  //initialization of the signal
		sig[i]=0;
	}  
	generate_signal(sig,size);
	
    clean_signal(sig,size);
	
	printf("Max: %d ",find_max(sig,size));
	printf("Min: %d ",find_min(sig,size));
	printf("Average: %f",find_average(sig,size));
	
	return 0;
}


void generate_signal(int signal[],int size){
	
	int i,temp;
	
	for(i=0;i<size;i++){ //filling the array
		signal[i]=rand() % 101;
	}
	
	for(i=0;i<10;i++){ //inserting -1 at random places;
		temp=rand() % size;
		signal[temp]=-1;
	}
	
	printf("Original signal:\n");
	
	for(i=0;i<size;i++){
		printf("%d ",signal[i]);
	}
	
	printf("\n\n");
}

void clean_signal(int signal[],int size){
	
	int i;
	
	for(i=0;i<size;i++){
	
		
		if(signal[0]==-1){ //edge case #1
			signal[0]=signal[1]/2;
		}
		
		if(signal[size]==-1){ //edge case #2
			signal[size]=signal[size-1]/2;
		}
		
			else if(signal[i]==-1){
			
			signal[i]=(signal[i+1]+signal[i-1])/2;
		}
		
		}
	
	printf("Cleaned signal:\n");
	
	for(i=0;i<size;i++){
		printf("%d ",signal[i]);
	}
	
	printf("\n\n");
	
}

int find_max(int signal[],int size){
	int max=0,i;
	for(i=0;i<size;i++){
		if(signal[i]>max){
			max=signal[i];
		}
	}
	return max;
}

int find_min(int signal[],int size){
	int min=100,i;
	
	for(i=0;i<size;i++){
		if(signal[i]<min){
			min=signal[i];
		}
	}
	return min;
}

float find_average(int signal[],int size){
	int sum,i;
	
	for(i=0;i<size;i++){
		sum+=signal[i];
	}
	
	return sum/size;
}
