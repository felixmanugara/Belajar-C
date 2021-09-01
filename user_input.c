#include <stdio.h>
#include <stdlib.h>

int main() {
    /* mengambil input dari user dengan scanf() */
    int age;
    /* kita harus melakukan alokasi jumlah
    karakter jika nilai variabel belum ditentukan */
    char month[12];
    printf("masukkan tanggal lahir anda : ");
    scanf("%d", &age); // tanda & berguna sebagai pointer untuk variabel age
    printf("masukkan bulan kelahiran anda:\n ");
    fgets(month, 12, stdin); // stdin berarti standar input
    printf("anda lahir pada tanggal %d di bulan %s", age, month);
    /* kelemahan scanf() jika menginput tipe data char, 
    karakter setelah spasi tidak akan di tampilkan kembali
    untuk mengatasi masalah ini dapat menggunakan fget() */
}
