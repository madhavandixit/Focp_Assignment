#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digits = 0, sum = 0;
    
    printf("enter an integer: ");
    scanf("%d", &num);
    
    temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}
