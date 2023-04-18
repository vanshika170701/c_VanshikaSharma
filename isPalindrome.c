#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int len = strlen(str);
    int isPalindrome = 1;
    
    for(int i=0; i<len/2; i++) {
        if(str[i] != str[len-i-1]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if(isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
