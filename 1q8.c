#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", (i + j) % 2);
        }
        printf("\n");
    }
    return 0;
}
