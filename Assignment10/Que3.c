#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    
  
    strncpy(str3, str2, 3);
    str3[3] = '\0';
    printf("Partial copy: %s\n", str3);
    
    
  strncat(str1, "XYZ", 2);
    printf("Partial concat: %s\n", str1);
    
    strncat(str3, "XYZ", 3);
    printf("Partial concat: %s\n", str3);

 
   
   
}