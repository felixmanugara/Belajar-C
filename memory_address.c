#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 21;
    char nama[10] = "felix";
    double gpa = 3.5;
    // %p digunakan untuk mencetak memory address
    // & pada age digunakan untuk menunjukan pointer
    printf("age: %p\nnama: %p\ngpa: %p\n", &age, &nama, &gpa);
}