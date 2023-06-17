#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;

    // Convert the number to string for digit manipulation
    char numStr[5];
    snprintf(numStr, sizeof(numStr), "%d", num);

    int i, j;
    for (i = 0; i < 4; i++) {
        // Copy the original number string to a temporary string
        char tempStr[5];
        snprintf(tempStr, sizeof(tempStr), "%s", numStr);

        // Remove the current digit from the temporary string
        for (j = i; j < 3; j++) {
            tempStr[j] = tempStr[j + 1];
        }
        tempStr[3] = '\0';

        // Convert the temporary string back to an integer
        int tempNum = atoi(tempStr);

        // Check if the current number is larger than the previous largest number
        if (tempNum > largest) {
            largest = tempNum;
        }
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestNumber(num);

    printf("Largest number by deleting a single digit: %d\n", largest);

    return 0;
}
