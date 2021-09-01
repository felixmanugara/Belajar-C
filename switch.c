#include <stdio.h>
#include <stdlib.h>

int main() {

    char nilai = 'C';

    switch (nilai)
    {
    case 'A':
        printf("nilaimu sangat bagus");
        break;
    case 'B':
        printf("nilaimu bagus");
        break;
    case 'C':
        printf("nilaimu cukup");
        break;
    case 'D':
        printf("nilaimu kurang bagus");
        break;
    case 'E':
        printf("nilaimu sangat kurang");
        break;
    case 'F':
        printf("kamu gagal, harap mencoba kembali");
        break;
    
    default:
        printf("kamu salah menginput nilai");
        break;
    }
}