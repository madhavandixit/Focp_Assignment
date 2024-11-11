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
    
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d scored 99 first.\n", i + 1);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("No student scored 99.\n");
    }
    
    return 0;
}
