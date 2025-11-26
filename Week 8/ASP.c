#include <stdio.h>

int main() {
    int n;
    int start[100], finish[100];

    printf("Enter number of activities: ");
    scanf("%d", &n);

    printf("Enter start times:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &start[i]);

    printf("Enter finish times:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &finish[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (finish[j] > finish[j + 1]) {
                int temp = finish[j];
                finish[j] = finish[j + 1];
                finish[j + 1] = temp;
                temp = start[j];
                start[j] = start[j + 1];
                start[j + 1] = temp;
            }
        }
    }

    printf("Selected Activity:\n");
    int last = 0;
    printf("Activity 0 -> Start: %d  Finish: %d\n", start[0], finish[0]);

    for (int i = 1; i < n; i++) {
        if (start[i] >= finish[last]) {
            printf("Activity %d -> Start: %d  Finish: %d\n", i, start[i], finish[i]);
            last = i;
        }
    }

    return 0;
}
