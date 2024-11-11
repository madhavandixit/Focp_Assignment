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
    
    int count = 0;
    
    printf("Students who scored 99:\n");
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d\n", i + 1);
            count++;
        }
    }
    
    if (count == 0) {
        printf("No student scored 99.\n");
    } else {
        printf("Total students who scored 99: %d\n", count);
    }
    
    return 0;
}
