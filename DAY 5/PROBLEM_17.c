#include <stdio.h>

// Function to check if a number is perfect
int isPerfectNumber(int n) {
    int sum = 0;
    
    // Find all factors and add them (excluding n itself)
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    
    // A perfect number equals the sum of its factors
    return (sum == n);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPerfectNumber(num)) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }
    
    return 0;
}
