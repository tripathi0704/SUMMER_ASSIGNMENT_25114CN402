#include <stdio.h>

// Function to count set bits in a number
int countSetBits(int n) {
    int count = 0;
    
    while (n > 0) {
        if (n & 1) {  // Check if last bit is 1
            count++;
        }
        n = n >> 1;  // Right shift by 1 (divide by 2)
    }
    
    return count;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Number of set bits in %d is: %d\n", num, countSetBits(num));
    
    return 0;
}
