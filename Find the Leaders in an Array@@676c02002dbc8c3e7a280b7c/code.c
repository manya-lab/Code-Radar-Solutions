#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input loop to fill the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop to process and print elements based on conditions
    for (int i = 0; i < n - 1; i++) { // Only up to n-1 to prevent out-of-bounds access
        if (arr[i] >= arr[i + 1]) {
            printf("%d ", arr[i]);
        }
    }

    // Always print the last element
    printf("%d\n", arr[n - 1]);

    return 0;
}