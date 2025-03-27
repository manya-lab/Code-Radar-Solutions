#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input loop
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Calculate the product of the largest two elements (last two in the sorted array)
    int result = arr[n - 1] * arr[n - 2];
    printf("%d\n", result);

    return 0;
}