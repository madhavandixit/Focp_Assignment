#include <stdio.h>

void rotate_array(int arr[], int n) {
    int last = arr[n - 1];
    
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = last;
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array before rotation:\n");
    print_array(arr, n);
    
    rotate_array(arr, n);
    
    printf("Array after rotation:\n");
    print_array(arr, n);
    
    return 0;
}
