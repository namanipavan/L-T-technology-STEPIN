#include <stdio.h>
#include <stdint.h>

void printExponent(double x) {
    uint64_t* p = (uint64_t*) &x;
    uint64_t exponent = (*p >> 52) & 0x7FF;

    // Print exponent in hexadecimal format
    printf("Exponent (Hex): 0x%llX\n", exponent);

    // Print exponent in binary format
    printf("Exponent (Binary): 0b");
    for (int i = 10; i >= 0; i--) {
        uint64_t bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
