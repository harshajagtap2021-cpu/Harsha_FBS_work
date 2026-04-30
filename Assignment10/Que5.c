#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    
 


    int res = strncmp("Helloi", "Helloy", 6);
    printf("strncmp: %d\n", res);

    
   
    char str4[50] = "Hi ";
    strncat(str4, "Friends", 3);
    printf("strncat: %s\n", str4);

   
    int cmp = strcasecmp("HELLO", "hello");
    printf("strcasecmp: %d\n", cmp);


    char str5[] = "C,Java,Python";
    char *token = strtok(str5, ",");
    printf("strtok:\n");
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }

    
}