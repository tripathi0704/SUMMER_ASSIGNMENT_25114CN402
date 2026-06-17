#include <stdio.h>

int isPalindrome(int n)
{
    int original = n;
    int reverse = 0;
    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    return original == reverse;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPalindrome(n))
    {
        printf("%d is a Palindrome number\n", n);
    }
    else
    {
        printf("%d is NOT a Palindrome number\n", n);
    }
    return 0;
}
