#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    
      printf("Length of str1: %d \n", strlen(str1));
      
      strcpy(str3, str1);
    printf("Str3 Copy: %s\n", str3);
    
    strcat(str1, str2);
    printf("Concatenation: %s\n", str1);
    
    
    printf("Compare: %d\n", strcmp(str1, str2));
      
      
     
	char str4[50] = "class";
	char str5[50] = "CLASS";
      printf("Reverse: %s\n", strrev(str4));
      
      printf("Upper: %s\n", strupr(str4));
      
        printf("Lower: %s\n", strlwr(str5));
    
}