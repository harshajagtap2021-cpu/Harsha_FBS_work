#include<stdio.h>
void checkCase(char *ch)
{
    if(*ch >= 'A' && *ch <= 'Z')
        printf("Character is Uppercase");
    else if(*ch >= 'a' && *ch <= 'z')
        printf("Character is Lowercase");
    else
        printf("Not an alphabet");
}

void main()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c", &ch);

    checkCase(&ch);
}