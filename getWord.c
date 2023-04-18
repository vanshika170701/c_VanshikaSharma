#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    printf("Enter input in curly Braces\n");
    scanf("%[^ \n]", str);
    char new_word[strlen(str)];
    int j = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            new_word[j] = str[i];
            j++;
        }
        else if (str[i] == ',')
        {
            new_word[j] = '\0';
            printf("%s\n", new_word);
            j = 0;
        }
    }
    new_word[j] = '\0';
    printf("%s\n", new_word);

    return 0;
}
