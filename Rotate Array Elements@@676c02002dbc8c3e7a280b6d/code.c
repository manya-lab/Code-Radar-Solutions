#include<stdio.h>

void rotateLeft(int arr[], int n, int d) {
    int temp[d];
    
    // Store the first 'd' elements in a temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }

    // Move the temporary elements to the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int n, d;
    scanf("%d %d", &n, &d); // Input size of array and number of positions to rotate
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }

    rotateLeft(arr, n, d);


    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print the rotated array
    }

    return 0;
}