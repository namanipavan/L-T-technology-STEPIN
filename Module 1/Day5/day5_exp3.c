#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time differenceBetweenTimePeriods(struct Time t1, struct Time t2) {
    struct Time diff;

    if (t2.seconds > t1.seconds) {
        --t1.minutes;
        t1.seconds += 60;
    }
    diff.seconds = t1.seconds - t2.seconds;

    if (t2.minutes > t1.minutes) {
        --t1.hours;
        t1.minutes += 60;
    }
    diff.minutes = t1.minutes - t2.minutes;

    diff.hours = t1.hours - t2.hours;

    return diff;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    difference = differenceBetweenTimePeriods(endTime, startTime);

    printf("\nDifference: %d hours, %d minutes, %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
