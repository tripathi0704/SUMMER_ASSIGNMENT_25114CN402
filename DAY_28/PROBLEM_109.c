#include <stdio.h>

#define MAX 50

struct Book
{
    int id;
    char title[60];
    char author[60];
    int issued;
};

void addBook(struct Book books[], int *count)
{
    if (*count >= MAX)
    {
        printf("Library is full.\n");
        return;
    }

    printf("Enter book ID: ");
    scanf("%d", &books[*count].id);
    printf("Enter title: ");
    scanf(" %59[^\n]", books[*count].title);
    printf("Enter author: ");
    scanf(" %59[^\n]", books[*count].author);
    books[*count].issued = 0;

    (*count)++;
    printf("Book added successfully.\n");
}

void displayBooks(struct Book books[], int count)
{
    int i;

    if (count == 0)
    {
        printf("No books available.\n");
        return;
    }

    printf("\nID\tTitle\t\tAuthor\t\tStatus\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t\t%s\t\t%s\n", books[i].id, books[i].title, books[i].author, books[i].issued ? "Issued" : "Available");
    }
}

void issueBook(struct Book books[], int count)
{
    int id, i;

    printf("Enter book ID to issue: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (books[i].id == id)
        {
            if (books[i].issued == 0)
            {
                books[i].issued = 1;
                printf("Book issued successfully.\n");
            }
            else
            {
                printf("Book is already issued.\n");
            }

            return;
        }
    }

    printf("Book not found.\n");
}

void returnBook(struct Book books[], int count)
{
    int id, i;

    printf("Enter book ID to return: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (books[i].id == id)
        {
            if (books[i].issued == 1)
            {
                books[i].issued = 0;
                printf("Book returned successfully.\n");
            }
            else
            {
                printf("Book was not issued.\n");
            }

            return;
        }
    }

    printf("Book not found.\n");
}

int main()
{
    struct Book books[MAX];
    int choice, count = 0;

    do
    {
        printf("\n=== Library Management System ===\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                issueBook(books, count);
                break;
            case 4:
                returnBook(books, count);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    while (choice != 5);

    return 0;
}