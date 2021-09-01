#include <stdio.h>
#include <stdlib.h>


int main() {
    int num = 25; // membuat variabel num
    printf("angka saat ini adalah %d\n", num);
    num = 45; // mengubah nilai dari variabel num
    printf("angka saat ini adalah %d\n", num);
    /* output printf pertama adalah 25 dan
    output printf kedua adalah 45 */

    /* constant adalah jenis variabel 
    yang nilainya tidak bisa diubah */

    const int ANGKA = 15;
    printf("angka saat ini adalah %d\n", ANGKA);
    // angka = 20; mengubah nilai dari variabel angka
    printf("angka saat ini adalah %d\n", ANGKA);
    /* jika angka = 20 dijalankan maka
    akan terjadi error */

}