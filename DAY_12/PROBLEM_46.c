#include <stdio.h>
#include <math.h>

int isArmstrong(int n)
{
    int original = n;
    int sum = 0;
    int digits = 0;
    int temp = n;
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }
    temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }
    return sum == original;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isArmstrong(n))
    {
        printf("%d is an Armstrong number\n", n);
    }
    else
    {
        printf("%d is NOT an Armstrong number\n", n);
    }
    return 0;
}
