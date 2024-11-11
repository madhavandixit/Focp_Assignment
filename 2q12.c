#include <stdio.h>

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, pos, choice;
    
    printf("Enter the num of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array before deletion:\n");
    print_array(arr, n);
    
    printf("Choose a deletion type:\n");
    printf("1. Delete at Front\n2. Delete at Any Position\n3. Delete at End\n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            for (int i = 0; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            break;
        
        case 2:
            printf("Enter position (0 to %d) to delete the value: ", n - 1);
            scanf("%d", &pos);
            if (pos >= 0 && pos < n) {
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
            } else {
                printf("Invalid position!\n");
            }
            break;
        
        case 3:
            n--;
            break;
        
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    
    printf("Array after deletion:\n");
    print_array(arr, n);
    
    return 0;
}
