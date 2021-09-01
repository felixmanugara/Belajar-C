/* pointer adalah tipe data yang menyimpan
   memory address dari sebuah variabel */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int angka = 7;
    int * pAngka = &angka;
    double num = 4.5;
    double * pNum = &num;
    char huruf = 'A';
    char * Huruf = &huruf;

    /* membuat variabel pointer untuk
       menyimpan memory address dari variabel
       yang telah dibuat di atas      
    */
    
    /* penggunaan p pada penamaan variabel pointer
       bersifat opsional, hal ini dilakukan untuk
       menandakan variabel sebagai variabel pointer                          
    */
    printf("angka mem addr: %p\nhuruf mem addr: %p\n",pAngka, Huruf);

    /* derefencing variabel dilakukan untuk
       mencetak nilai dari variabel yang di assign
       ke variabel pointer, jadi daripada mencetak
       memory address tindakan ini akan mencetak nilainya
    */
   printf("huruf: %c\nnum: %f\n",*Huruf, *pNum);
}