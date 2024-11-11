#include <stdio.h>
#include <math.h>

int binary_to_decimal(int binary) {
    int decimal = 0, power = 0;
    while (binary != 0) {
        decimal += (binary % 10) * pow(2, power);
        binary /= 10;
        power++;
    }
    return decimal;
}

void decimal_to_binary(int decimal) {
    int binary[32], index = 0;
    
    if (decimal == 0) {
        printf("0");
        return;
    }
    
    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }
    
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int choice, number;
    
    printf("Enter your choice:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &number);
        printf("Decimal equivalent: %d\n", binary_to_decimal(number));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        printf("Binary equivalent: ");
        decimal_to_binary(number);
        printf("\n");
    } else {
        printf("Invalid choice\n");
    }
    
    return 0;
}
