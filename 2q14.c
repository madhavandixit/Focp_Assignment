#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    




    int arr[n], found_duplicate = 0;
    
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Duplicates in the array: ");
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    printf("%d ", arr[i]);
                    arr[j] = -1;  
                    found_duplicate = 1;
                    break;
                }
            }
        }
    }
    
    if (!found_duplicate) {
        printf("-1");
    }
    
    printf("\n");
    return 0;
}
