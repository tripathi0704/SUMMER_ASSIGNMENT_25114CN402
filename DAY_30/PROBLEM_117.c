#include <stdio.h>
#include <string.h>

#define MAX 50

struct Student
{
    int roll;
    char name[50];
    char branch[50];
    char city[50];
};

void addStudent(struct Student students[], int *count)
{
    if (*count >= MAX)
    {
        printf("Student list is full.\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &students[*count].roll);
    printf("Enter student name: ");
    scanf(" %49[^\n]", students[*count].name);
    printf("Enter branch: ");
    scanf(" %49[^\n]", students[*count].branch);
    printf("Enter city: ");
    scanf(" %49[^\n]", students[*count].city);

    (*count)++;
    printf("Student record added successfully.\n");
}

void displayStudents(struct Student students[], int count)
{
    int i;

    if (count == 0)
    {
        printf("No student records found.\n");
        return;
    }

    printf("\nRoll\tName\t\tBranch\t\tCity\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t\t%s\t\t%s\n", students[i].roll, students[i].name, students[i].branch, students[i].city);
    }
}

void searchStudent(struct Student students[], int count)
{
    int roll, i;

    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++)
    {
        if (students[i].roll == roll)
        {
            printf("Student found:\n");
            printf("Roll: %d\nName: %s\nBranch: %s\nCity: %s\n", students[i].roll, students[i].name, students[i].branch, students[i].city);
            return;
        }
    }

    printf("Student not found.\n");
}

int main()
{
    struct Student students[MAX];
    int choice, count = 0;

    do
    {
        printf("\n=== Student Record System Using Arrays and Strings ===\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
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