#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array
    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    // Loop to check divisibility by index
    for(int i = 2; i < n; i++) { // Start from index 2 as per your logic
        if(arr[i] % i == 0) { // Check if the element is divisible by its index
            count++;
        }
    }

    // Print the count of such elements
    printf("%d\n", count);
    
    return 0;
}