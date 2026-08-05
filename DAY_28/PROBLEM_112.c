#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact
{
    char name[50];
    char phone[20];
    char email[50];
};

void addContact(struct Contact contacts[], int *count)
{
    if (*count >= MAX)
    {
        printf("Contact list is full.\n");
        return;
    }

    printf("Enter name: ");
    scanf(" %49[^\n]", contacts[*count].name);
    printf("Enter phone number: ");
    scanf(" %19[^\n]", contacts[*count].phone);
    printf("Enter email: ");
    scanf(" %49[^\n]", contacts[*count].email);

    (*count)++;
    printf("Contact added successfully.\n");
}

void displayContacts(struct Contact contacts[], int count)
{
    int i;

    if (count == 0)
    {
        printf("No contacts found.\n");
        return;
    }

    printf("\nName\t\tPhone\t\tEmail\n");
    for (i = 0; i < count; i++)
    {
        printf("%s\t\t%s\t\t%s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}

void searchContact(struct Contact contacts[], int count)
{
    char name[50];
    int i;

    printf("Enter name to search: ");
    scanf(" %49[^\n]", name);

    for (i = 0; i < count; i++)
    {
        if (strcmp(contacts[i].name, name) == 0)
        {
            printf("Contact found:\n");
            printf("Name: %s\nPhone: %s\nEmail: %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
            return;
        }
    }

    printf("Contact not found.\n");
}

int main()
{
    struct Contact contacts[MAX];
    int choice, count = 0;

    do
    {
        printf("\n=== Contact Management System ===\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addContact(contacts, &count);
                break;
            case 2:
                displayContacts(contacts, count);
                break;
            case 3:
                searchContact(contacts, count);
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