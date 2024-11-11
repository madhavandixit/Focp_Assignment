#include <stdio.h>

void swap_with_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_with_arithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap_with_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void swap_with_multiplication(int *a, int *b) {
    if (*b != 0) {
        *a = *a * *b;
        *b = *a / *b;
        *a = *a / *b;
    }
}

int main() {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    printf("\nOriginal values: a = %d, b = %d\n", a, b);
    
    swap_with_temp(&a, &b);
    printf("After swap_with_temp: a = %d, b = %d\n", a, b);
    
    swap_with_arithmetic(&a, &b);
    printf("After swap_with_arithmetic: a = %d, b = %d\n", a, b);
    
    swap_with_xor(&a, &b);
    printf("After swap_with_xor: a = %d, b = %d\n", a, b);
    
    swap_with_multiplication(&a, &b);
    printf("After swap_with_multiplication: a = %d, b = %d\n", a, b);
    
    return 0;
}
