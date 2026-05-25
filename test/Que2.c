#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch, symbol;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character to replace: ");
    scanf(" %c", &ch);

    printf("Enter special symbol: ");
    scanf(" %c", &symbol);

    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        if(str[i] == ch)
        {
            str[i] = symbol;
        }
    }

    printf("Updated string: %s", str);

    return 0;
}