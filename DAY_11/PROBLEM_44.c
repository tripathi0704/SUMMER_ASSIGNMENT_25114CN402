#include <stdio.h>

long long factorial(int n)
{
    int i;
    long long result = 1;
    for (i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %lld\n", n, factorial(n));
    return 0;
}
