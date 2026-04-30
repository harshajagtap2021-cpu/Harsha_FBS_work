#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    
  
    printf("First 'o': %s\n", strchr(str1, 'o'));

	printf("Find 'lo': %s\n", strstr(str1, "lo"));
	printf("Find 'r': %s\n", strstr(str2, "r"));

 
   
   
}