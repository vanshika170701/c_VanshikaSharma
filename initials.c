#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Initials: ");
    printf("%c", toupper(name[0]));
    
    for(int i=1; name[i] != '\0'; i++) {
        if(name[i-1] == ' ') {
            printf("%c", toupper(name[i]));
        }
    }
    
    return 0;
}
