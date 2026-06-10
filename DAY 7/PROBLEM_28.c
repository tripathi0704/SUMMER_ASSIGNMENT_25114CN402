#include <stdio.h>

void reverseNumber(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n % 10);
    reverseNumber(n / 10);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number: ");
    reverseNumber(n);
    printf("\n");
    return 0;
}
