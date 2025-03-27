#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Correct loop for input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output array elements
    for (int i = 0; i < n - 1; i++) { // Ensures valid access for arr[i+1]
        if (arr[i] >= arr[i + 1]) {
            printf("%d ", arr[i]);
        }
    }
    
    // Special handling for the last element, if needed
    if (n > 1 && arr[n - 1] >= arr[n - 2]) {
        printf("%d ", arr[n - 1]);
    }
    
    return 0;
}