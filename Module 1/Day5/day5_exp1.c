#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

int main() {
    struct Box box;
    struct Box *ptr;

    ptr = &box;

    // Using (*) asterisk and (.) dot operator
    (*ptr).length = 5.0;
    (*ptr).width = 3.0;
    (*ptr).height = 2.0;

    float volume = (*ptr).length * (*ptr).width * (*ptr).height;
    float surfaceArea = 2 * ((*ptr).length * (*ptr).width + (*ptr).length * (*ptr).height + (*ptr).width * (*ptr).height);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    // Using (->) arrow operator
    ptr->length = 5.0;
    ptr->width = 3.0;
    ptr->height = 2.0;

    volume = ptr->length * ptr->width * ptr->height;
    surfaceArea = 2 * (ptr->length * ptr->width + ptr->length * ptr->height + ptr->width * ptr->height);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
