#include <stdio.h>

// Function to find x^n without using pow()
long long findPower(int x, int n) {
    long long result = 1;
    
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    
    return result;
}

int main() {
    int x, n;
    
    printf("Enter base (x): ");
    scanf("%d", &x);
    
    printf("Enter exponent (n): ");
    scanf("%d", &n);
    
    printf("%d^%d = %lld\n", x, n, findPower(x, n));
    
    return 0;
}
