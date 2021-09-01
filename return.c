#include <stdio.h>
#include <stdlib.h>

/* kita bisa membuat fungsi lain di atas
main function dengan menuliskan nama fungsi
dan parameternya sebelum main funtion */


int power(int num);

int main() {

    printf("jawaban: %d", power(6));

    return 0;
}


// tipe function harus sesuai dengan data yang diolah
int power(int num) {

    return num ^ 3;
}