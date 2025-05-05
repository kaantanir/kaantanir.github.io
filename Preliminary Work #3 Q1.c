#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]);

int main() {
    char str1[100];
    int len;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin); 

    if (isPalindrome(str1)) {
        printf("It is palindrome!\n");
    } else {
        printf("It is not palindrome.\n");
    }

    return 0;
}

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;

        
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; 
        }

        left++;
        right--;
    }

    return 1; 
}


