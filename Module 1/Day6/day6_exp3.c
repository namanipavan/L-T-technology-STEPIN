#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStructures(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    struct Student students[5]; // Example array of structures

    // Assume the array of structures has been initialized with data
    
    displayStructures(students, sizeof(students) / sizeof(students[0]));

    return 0;
}
