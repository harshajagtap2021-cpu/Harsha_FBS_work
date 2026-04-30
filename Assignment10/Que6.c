#include <stdio.h>
#include<string.h>

void mystrupr(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}
n
void main()
{
    char str[] = "hello";

    mystrupr(str);

    printf("%s", str);
}