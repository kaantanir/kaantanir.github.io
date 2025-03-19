

/* a  program where the user enters two positive integers, "a" and "b" and calculates the greatest common divisor (GCD) of "a" and "b"
using the Euclidean algorithm. */

#include <stdio.h>

int gcd(int a, int b);

int main() {
	int a, b,result;
	
	printf("Enter the first positive integer:\n");
	scanf("%d",&a);
	printf("Enter the second positive integer:\n");
	scanf("%d",&b);
	
	result=gcd(a,b);
	
	printf("The greatest common divider (GCD) of %d and %d is %d",a,b,result);
	
	return 0;
}

int gcd(int a, int b){
	while(b!=0){
		int divisor=b;
		b=a%b;
		a=divisor;
	}
	return a;
}




