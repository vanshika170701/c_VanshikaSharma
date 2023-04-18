#include <stdio.h>

int myAtoiFunction(char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;
    while (str[i] == ' ')
        i++;
    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    for (; str[i] != '\0'; ++i) {
        if (str[i] >= '0' && str[i] <= '9')
            result = result * 10 + str[i] - '0';
        else
            break;
    }
    return sign * result;
}

int main() {
    char str[100];
    printf("Enter String : ");
    scanf("%s", str);
    printf("String: \"%s\"\n", str);
    printf("Parsed Int: %d\n", myAtoiFunction(str));
    return 0;
}
