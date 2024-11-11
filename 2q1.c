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
        marks[i] += 5;
    }
    
    printf("Updated marks:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }
    
    printf("\n");
    return 0;
}
