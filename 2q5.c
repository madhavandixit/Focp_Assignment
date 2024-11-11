#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    int marks[n];
    
    printf("Enter the marks of each student:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    
    printf("The total sum of all scores is: %d\n", sum);
    
    return 0;
}
