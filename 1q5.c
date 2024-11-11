#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    if (sum == num) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }
    
    return 0;
}
