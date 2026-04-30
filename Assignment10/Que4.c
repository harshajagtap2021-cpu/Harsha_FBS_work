#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    
  
     printf("memcmp: %d\n", memcmp("abc", "abd", 3));

  memset(str3, '*', 4);
    str3[3] = '\0';
    printf("memset: %s\n", str3);



    memcpy(str3, "Test", 4);
    str3[4] = '\0';
    printf("memcpy: %s\n", str3);
   
   
}