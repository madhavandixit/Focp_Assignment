#include <stdio.h>

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, pos, value, choice;
    
    printf("Enter the num of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1];  
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("before insertion:\n");
    print_array(arr, n);
    
    printf("Choose insertion type:\n");
    printf("1. Insert at Front\n2. Insert at Any Position\n3. Insert at End\n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter value to insert at the front: ");
            scanf("%d", &value);
            for (int i = n; i > 0; i--) {
                arr[i] = arr[i - 1];
            }
            arr[0] = value;
            n++;
            break;
        
        case 2:
            printf("Enter position (0 to %d) to insert the value: ", n - 1);
            scanf("%d", &pos);
            if (pos >= 0 && pos <= n) {
                printf("Enter value to insert: ");
                scanf("%d", &value);
                for (int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;
                n++;
            } else {
                printf("Invalid position!\n");
            }
            break;
        
        case 3:
            printf("Enter value to insert at the end: ");
            scanf("%d", &value);
            arr[n] = value;
            n++;
            break;
        
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    
    printf("Array after insertion:\n");
    print_array(arr, n);
    
    return 0;
}
