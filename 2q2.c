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
    
    printf("Grades of students:\n");
    for (int i = 0; i < n; i++) {
        if (marks[i] >= 75) {
            printf("Student %d: A grade\n", i + 1);
        } else if (marks[i] >= 60) {
            printf("Student %d: B grade\n", i + 1);
        } else if (marks[i] >= 40) {
            printf("Student %d: C grade\n", i + 1);
        } else {
            printf("Student %d: D grade\n", i + 1);
        }
    }
    
    return 0;
}
