#include<stdio.h>

void checkvote(int age)
{
    if(age >= 18)
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");
}

void main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);


    checkote(age);
}