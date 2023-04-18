#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if (str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }
    for (i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    printf("Reversed string: ");
    for (i = 0; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

