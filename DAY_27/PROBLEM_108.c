#include <stdio.h>

int main()
{
    char name[50];
    int roll, i;
    int marks[5];
    int total = 0;
    float percentage;

    printf("Enter student name: ");
    scanf(" %49[^\n]", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);

    for (i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0f;

    printf("\n=== Marksheet ===\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll);
    for (i = 0; i < 5; i++)
    {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 40)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    if (percentage >= 90)
    {
        printf("Grade: A+\n");
    }
    else if (percentage >= 75)
    {
        printf("Grade: A\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade: B\n");
    }
    else if (percentage >= 40)
    {
        printf("Grade: C\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    return 0;
}