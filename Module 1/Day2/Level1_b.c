#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* ptr1 = (char*)a;
    char* ptr2 = (char*)b;

    while (size--) {
        char temp = *ptr1;
        *ptr1++ = *ptr2;
        *ptr2++ = temp;
    }
}

int main() {
    int a = 10;
    int b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    char c = 'X';
    char d = 'Y';

    printf("Before swap: c = %c, d = %c\n", c, d);
    swap(&c, &d, sizeof(char));
    printf("After swap: c = %c, d = %c\n", c, d);

    return 0;
}
 