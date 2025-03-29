#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input size of the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }
    int x;
    scanf("%d", &x); // Input target sum

    // Additional logic to avoid duplicate pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == x) {
                printf("%d %d\n", arr[i], arr[j]);
                break; // Break the inner loop to prevent duplicates
            }
        }
    }
    return 0;
}