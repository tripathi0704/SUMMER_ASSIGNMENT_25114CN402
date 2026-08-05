#include <stdio.h>
#include <string.h>

#define MAX 50

struct Student
{
    int roll;
    char name[50];
    char course[50];
    float marks;
};

void addStudent(struct Student students[], int *count)
{
    if (*count >= MAX)
    {
        printf("Student record is full.\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &students[*count].roll);
    printf("Enter name: ");
    scanf(" %49[^\n]", students[*count].name);
    printf("Enter course: ");
    scanf(" %49[^\n]", students[*count].course);
    printf("Enter marks: ");
    scanf("%f", &students[*count].marks);

    (*count)++;
    printf("Student added successfully.\n");
}

void displayStudents(struct Student students[], int count)
{
    int i;

    if (count == 0)
    {
        printf("No student records found.\n");
        return;
    }

    printf("\nRoll\tName\t\tCourse\t\tMarks\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t\t%s\t\t%.2f\n", students[i].roll, students[i].name, students[i].course, students[i].marks);
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
            printf("Roll: %d\nName: %s\nCourse: %s\nMarks: %.2f\n", students[i].roll, students[i].name, students[i].course, students[i].marks);
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
        printf("\n=== Student Record Management System ===\n");
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