#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;
    printf("Time is %02d:%02d:%02d (hh:mm:ss)\n", hours, minutes, seconds);

    return 0;
}
