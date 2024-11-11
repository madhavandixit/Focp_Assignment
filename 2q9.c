#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (n == 1) {
        printf("The peak element is: %d\n", arr[0]);
    } else {
        for (int i = 0; i < n; i++) {
            if ((i == 0 && arr[i] >= arr[i + 1]) || 
                (i == n - 1 && arr[i] >= arr[i - 1]) || 
                (i > 0 && i < n - 1 && arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])) {
                printf("The peak element is: %d\n", arr[i]);
                break;
            }
        }
    }
    
    return 0;
}
