#include <stdio.h>
#include <string.h>

#define MAX 50

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

void addItem(struct Item items[], int *count)
{
    if (*count >= MAX)
    {
        printf("Inventory is full.\n");
        return;
    }

    printf("Enter item ID: ");
    scanf("%d", &items[*count].id);
    printf("Enter item name: ");
    scanf(" %49[^\n]", items[*count].name);
    printf("Enter quantity: ");
    scanf("%d", &items[*count].quantity);
    printf("Enter price: ");
    scanf("%f", &items[*count].price);

    (*count)++;
    printf("Item added successfully.\n");
}

void displayItems(struct Item items[], int count)
{
    int i;

    if (count == 0)
    {
        printf("No items in inventory.\n");
        return;
    }

    printf("\nID\tName\t\tQuantity\tPrice\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t\t%d\t\t%.2f\n", items[i].id, items[i].name, items[i].quantity, items[i].price);
    }
}

void searchItem(struct Item items[], int count)
{
    int id, i;

    printf("Enter item ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (items[i].id == id)
        {
            printf("Item found:\n");
            printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n", items[i].id, items[i].name, items[i].quantity, items[i].price);
            return;
        }
    }

    printf("Item not found.\n");
}

int main()
{
    struct Item items[MAX];
    int choice, count = 0;

    do
    {
        printf("\n=== Inventory Management System ===\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addItem(items, &count);
                break;
            case 2:
                displayItems(items, count);
                break;
            case 3:
                searchItem(items, count);
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