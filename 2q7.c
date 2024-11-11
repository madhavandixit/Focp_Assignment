#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    int marks[n];
    
    printf("Enter the marks of each student:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (marks[i] % 2 == 0) {
            printf("Student %d scored %d, which is even.\n", i + 1, marks[i]);
        } else {
            printf("Student %d scored %d, which is odd.\n", i + 1, marks[i]);
        }
    }
    
    return 0;
}
