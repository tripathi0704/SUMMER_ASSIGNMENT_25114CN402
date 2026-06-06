#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int length = strlen(binary);
    
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    
    return decimal;
}

int main() {
    char binary[32];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    printf("Decimal representation: %d\n", binaryToDecimal(binary));
    
    return 0;
}
