#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", (j % 2 == 0) ? 0 : 1);
        }
        printf(" ");
        for (int j = 1; j <= i; j++) {
            printf("%d", (j % 2 == 0) ? 0 : 1);
        }
        printf("\n");
    }
    return 0;
}
