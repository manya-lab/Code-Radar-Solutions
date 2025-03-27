#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], brr[n];  
    int evenCount = 0;   // To track the number of even elements

    // Store even numbers in brr
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            brr[evenCount] = arr[i];
            evenCount++;
        }
    }

    // If no even numbers are found, return -1
    if (evenCount == 0) {
        printf("-1");
        return 0;
    }

    // Find the maximum even number
    int max = brr[0];
    for (int i = 1; i < evenCount; i++) {
        if (brr[i] > max) {
            max = brr[i];
        }
    }

    // Print the max even number
    printf("%d", max);

    return 0;
}
