#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "hello";
    char *ptr = strdup(str);

    printf("%s\n", ptr);

    str[3] = 'a';

    printf("%s\n", str);
    printf("%s\n", ptr);
}