#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char firstNonRepeatingChar(char* str) {
    int freqMap[256] = {0};
    int len = strlen(str);
    for(int i=0; i<len; i++) {
        freqMap[str[i]]++;
    }
    for(int i=0; i<len; i++) {
        if(freqMap[str[i]] == 1) {
            return str[i];
        }
    }
    return '\0';
}

int main() {
    char str[100];
    printf("Enter a String\n");
    scanf("%s",str);
    char result = firstNonRepeatingChar(str);

    if(result == '\0') {
        printf("No non-repeating character found.");
    } else {
        printf("The first non-repeating character is %c", result);
    }

    return 0;
}
