#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic;
    float da;
    float hra;
    float gross;
};

int main()
{
    struct Employee employee;

    printf("Enter employee ID: ");
    scanf("%d", &employee.id);
    printf("Enter employee name: ");
    scanf(" %49[^\n]", employee.name);
    printf("Enter basic salary: ");
    scanf("%f", &employee.basic);

    employee.da = employee.basic * 0.40f;
    employee.hra = employee.basic * 0.20f;
    employee.gross = employee.basic + employee.da + employee.hra;

    printf("\n=== Salary Details ===\n");
    printf("Employee ID: %d\n", employee.id);
    printf("Name: %s\n", employee.name);
    printf("Basic Salary: %.2f\n", employee.basic);
    printf("DA: %.2f\n", employee.da);
    printf("HRA: %.2f\n", employee.hra);
    printf("Gross Salary: %.2f\n", employee.gross);

    return 0;
}