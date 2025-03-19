
/* a program that gets an integer number from the user as the input and reports the
nearest integer square root of this input number. */

#include <stdio.h>

int mysqrt(int number);

int main (){
	int number, result;
	
	printf("Enter a positive integer you would like to find its nearest integer square root:");
	scanf("%d",&number);
	
	if(number<0){
		printf("Please enter a positive integer since the square root operator is defined for non-negative integers.");
		return 0;
	}
	
	result=mysqrt(number);
	
	printf("Integer square root of %d: %d",number,result);
	
	return 0;
	
}

int mysqrt (int number){  // !!!!!
	int i=0;
	while(i*i<=number){
		i++;
	}
	return i-1;
}
