#include <stdio.h>
#include <string.h>

int areRotations(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0;
    }

    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL) {
        return 1;
    }

    return 0;
}

int main() {
    char str1[100], str2[100];
    printf("Enter String 1: ");
    scanf("%s", str1);
    printf("Enter String 2: ");
    scanf("%s", str2);

    if (areRotations(str1, str2)) {
        printf("%s and %s are rotations of each other.\n", str1, str2);
    } else {
        printf("%s and %s are not rotations of each other.\n", str1, str2);
    }

    return 0;
}
