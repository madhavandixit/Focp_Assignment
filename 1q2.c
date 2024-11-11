#include <stdio.h>

int main() {
    int a, b, hcf;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    for (hcf = (a < b ? a : b); hcf > 0; hcf--) {
        if (a % hcf == 0 && b % hcf == 0) {
            break;
        }
    }
    
    printf("HCF of %d and %d is %d\n", a, b, hcf);
    
    return 0;
}
