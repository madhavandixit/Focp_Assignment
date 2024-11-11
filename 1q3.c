#include <stdio.h>

int subtract(int x, int y) {
    while (y != 0) {
        int borrow = (~x) & y;
        x = x ^ y;
        y = borrow << 1;
    }
    return x;
}

int main() {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    int result = subtract(a, b);
    printf("Result of %d - %d is %d\n", a, b, result);
    
    return 0;
}
