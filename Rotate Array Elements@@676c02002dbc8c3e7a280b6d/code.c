#include<stdio.h>

void bringLastToFirst(int arr[], int n, int d) {
    int temp[d];

    // Store the last 'd' elements in a temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    // Shift the rest of the elements to the right
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }

    // Place the last 'd' elements at the beginning
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, d;
    scanf("%d %d", &n, &d); // Input array size and number of elements to bring to the front
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }

    bringLastToFirst(arr, n, d);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}