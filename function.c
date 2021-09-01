#include <stdio.h>
#include <stdlib.h>


// ini adalah fungsi void yang berarti tidak memiliki return
void sayhello() {

    printf("hello\n");
}

// ini adalah fungsi dengan parameter berupa variabel name
void nama(char name[]) {

    printf("hello %s",name);
}

/* function dibuat diatas main function agar program bisa dijalankan */

int main() {
    
    sayhello(); // ini adalah baris untuk mengaktifkan fungsi sayhello()
    nama("Felix");

    return 0;
}
