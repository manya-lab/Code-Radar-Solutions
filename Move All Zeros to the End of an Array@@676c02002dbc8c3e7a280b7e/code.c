#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input loop for array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Logic to move zeros to the end
    int count = 0; // Tracks the position for non-zero elements

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Place non-zero element at the current `count` index
        }
    }

    // Fill the rest of the array with zeros
    while (count < n) {
        arr[count++] = 0;
    }

    // Output the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}