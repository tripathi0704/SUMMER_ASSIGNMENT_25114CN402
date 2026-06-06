#include <stdio.h>

// Function to find largest prime factor
int largestPrimeFactor(int n) {
    int largestPrime = -1;
    
    // Divide by 2 until n becomes odd
    while (n % 2 == 0) {
        largestPrime = 2;
        n = n / 2;
    }
    
    // Check for odd factors from 3 onwards
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestPrime = i;
            n = n / i;
        }
    }
    
    // If n is still greater than 1, then it's a prime factor
    if (n > 1) {
        largestPrime = n;
    }
    
    return largestPrime;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Largest prime factor of %d is: %d\n", num, largestPrimeFactor(num));
    
    return 0;
}
