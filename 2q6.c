#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, average;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    int marks[n];
    
    printf("Enter the marks of each student:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    
    average = sum / n;
    
    printf("The average score is: %.2f\n", average);
    
    return 0;
}
