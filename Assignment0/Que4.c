#include<stdio.h>
void main()
{
int a=10,b=20,c=30,temp;
temp=a;
a=b;
c=a;
b=temp;
	
	printf("variable a= %d",a);
	printf("variable b= %d",b);
	printf("variable c= %d",c);
}