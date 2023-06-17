#include <stdio.h>

// Function to print numbers from 1 to n
void printNumbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

// Function to print spaces between numbers
void printSpaces(int n) {
    int i;
    for (i = 1; i >= n - 2; i--) {
        printf(" ");
    }
}

// Function to print numbers from n to 1
void printReverseNumbers(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        printNumbers(i);
        printSpaces(i);
        if (i != 1) {
            printReverseNumbers(i);
        }
        printf("\n");
    }

    return 0;
}
