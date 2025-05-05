
#include <stdio.h>
#include <string.h>

void sortIntegers(int *nums,int len);

int main(){
	
	int size,i;
	
	printf("Please enter the length of your string:\n");
	scanf("%d",&size);
	
	int strnums[size];
	
	for(i=0;i<size;i++){
		printf("Element %d/%d: \n",i+1,size);
		scanf("%d",&strnums[i]);
	}
	
	printf("Your string sorted in ascending order:\n");
	
	sortIntegers(strnums,size);
	
	for(i=0;i<size;i++){
		printf("%d ",strnums[i]);
	}
	
    return 0;
	
}

void sortIntegers(int *nums,int len){
	int i,j=0,temp;
    for (i=0; i<len; i++) {
        for ( j=i+1; j<len; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
}
	
}




