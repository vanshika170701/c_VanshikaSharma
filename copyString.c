#include <stdio.h>

void copy_string(char *str2, const char *str1) {
    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}

int main() {
    char str1[] = "Hello, world!";
    char str2[20];
    copy_string(str2, str1);
    printf("str1 string: %s\n", str1);
    printf("str2 string: %s\n", str2);
    return 0;
}
