#include <stdio.h>

struct SalesManager {
    int id;
    char name[50];
    float salary;
    float incentive;
    float target;
};

int main() {
    struct SalesManager s;

    printf("Enter id: ");
    scanf("%d", &s.id);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter salary: ");
    scanf("%f", &s.salary);

    printf("Enter incentive: ");
    scanf("%f", &s.incentive);

    printf("Enter target: ");
    scanf("%f", &s.target);

    printf("\nSales Manager Details:\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Salary: %.2f\n", s.salary);
    printf("Incentive: %.2f\n", s.incentive);
    printf("Target: %.2f\n", s.target);

    return 0;
}