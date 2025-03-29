#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int min = arr[0];
    int smin = __INT_MAX__;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            smin = min; 
            min = arr[i];
        } else if (arr[i] > min && arr[i] < smin) {
            smin = arr[i];
        }
    }

    if (smin == __INT_MAX__) {
        printf("-1\n");
    } else {
        printf("%d\n", smin);
    }

    return 0;
}