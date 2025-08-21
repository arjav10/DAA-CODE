#include <stdio.h>
int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter K: ");
    scanf("%d", &k);

    k = k % n; 
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[(n - k + i) % n]);
    }
    return 0;
}
