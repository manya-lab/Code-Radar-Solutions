#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int found = 0; // Variable to track if x is found
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d\n", i);
            found = 1; // Mark as found
            break; // Exit the loop once x is found
        }
    }
    if (!found) {
        printf("-1\n"); // Print -1 if x is not found in the array
    }
    return 0;
}