#include <stdio.h>
#include <stdlib.h>

int doloop();

int main() {

    int num = 1;

    while (num <= 5) {
        printf("%d\n", num);
        num ++;
    }

    return 0;
}
/* do while loop akan mengeksekusi kondisi
terlebih dahulu sebelum mengeceknya pada while */

int doloop() {

    int num = 1;
    do {
        printf("%d\n", num);
        num ++;
    } while (num <= 5);

    return 0;
}