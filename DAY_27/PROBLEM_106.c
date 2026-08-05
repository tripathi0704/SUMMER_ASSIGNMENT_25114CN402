#include <stdio.h>

#define MAX 50

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

void addEmployee(struct Employee employees[], int *count)
{
    if (*count >= MAX)
    {
        printf("Employee list is full.\n");
        return;
    }

    printf("Enter employee ID: ");
    scanf("%d", &employees[*count].id);
    printf("Enter name: ");
    scanf(" %49[^\n]", employees[*count].name);
    printf("Enter department: ");
    scanf(" %49[^\n]", employees[*count].department);
    printf("Enter salary: ");
    scanf("%f", &employees[*count].salary);

    (*count)++;
    printf("Employee added successfully.\n");
}

void displayEmployees(struct Employee employees[], int count)
{
    int i;

    if (count == 0)
    {
        printf("No employee records found.\n");
        return;
    }

    printf("\nID\tName\t\tDepartment\tSalary\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t\t%s\t\t%.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }
}

void searchEmployee(struct Employee employees[], int count)
{
    int id, i;

    printf("Enter employee ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (employees[i].id == id)
        {
            printf("Employee found:\n");
            printf("ID: %d\nName: %s\nDepartment: %s\nSalary: %.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
            return;
        }
    }

    printf("Employee not found.\n");
}

int main()
{
    struct Employee employees[MAX];
    int choice, count = 0;

    do
    {
        printf("\n=== Employee Management System ===\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                searchEmployee(employees, count);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    while (choice != 4);

    return 0;
}