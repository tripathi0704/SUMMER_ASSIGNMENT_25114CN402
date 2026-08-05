#include <stdio.h>
#include <string.h>

#define MAX 50

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

void addProduct(struct Product products[], int *count)
{
    if (*count >= MAX)
    {
        printf("Store inventory is full.\n");
        return;
    }

    printf("Enter product ID: ");
    scanf("%d", &products[*count].id);
    printf("Enter product name: ");
    scanf(" %49[^\n]", products[*count].name);
    printf("Enter quantity: ");
    scanf("%d", &products[*count].quantity);
    printf("Enter price: ");
    scanf("%f", &products[*count].price);

    (*count)++;
    printf("Product added successfully.\n");
}

void displayProducts(struct Product products[], int count)
{
    int i;

    if (count == 0)
    {
        printf("No products available.\n");
        return;
    }

    printf("\nID\tName\t\tQty\tPrice\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t\t%d\t%.2f\n", products[i].id, products[i].name, products[i].quantity, products[i].price);
    }
}

void billProduct(struct Product products[], int count)
{
    int id, qty, i;
    float total;

    printf("Enter product ID: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (products[i].id == id)
        {
            printf("Enter quantity to buy: ");
            scanf("%d", &qty);
            if (qty > 0 && qty <= products[i].quantity)
            {
                total = qty * products[i].price;
                products[i].quantity -= qty;
                printf("Product: %s\n", products[i].name);
                printf("Quantity: %d\n", qty);
                printf("Total Bill: %.2f\n", total);
            }
            else
            {
                printf("Invalid quantity.\n");
            }

            return;
        }
    }

    printf("Product not found.\n");
}

void searchProduct(struct Product products[], int count)
{
    int id, i;

    printf("Enter product ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (products[i].id == id)
        {
            printf("Product found:\n");
            printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n", products[i].id, products[i].name, products[i].quantity, products[i].price);
            return;
        }
    }

    printf("Product not found.\n");
}

int main()
{
    struct Product products[MAX];
    int choice, count = 0;

    do
    {
        printf("\n=== Complete Mini Project: Store Billing System ===\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Bill Product\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addProduct(products, &count);
                break;
            case 2:
                displayProducts(products, count);
                break;
            case 3:
                searchProduct(products, count);
                break;
            case 4:
                billProduct(products, count);
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