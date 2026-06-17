#include <stdio.h>

int isPerfect(int n)
{
    int sum = 0;
    int i;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum == n;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPerfect(n))
    {
        printf("%d is a Perfect number\n", n);
    }
    else
    {
        printf("%d is NOT a Perfect number\n", n);
    }
    return 0;
}
