#include <stdio.h>

int secondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements\n");
        return -1;
    }

    int first, second;
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (first == second) {
        printf("No unique second largest element\n");
        return -1;
    }

    return second;
}
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = secondLargest(arr, n);
    if (result != -1)
        printf("Second largest element: %d\n", result);

    return 0;
}
