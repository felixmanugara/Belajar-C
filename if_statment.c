#include <stdio.h>
#include <stdlib.h>

int which(int num1, int num2) {
     
     int result;

     if(num1 > num2) {

         result = num1;
     } 
     else {
         
         result = num2;

     }

     return result;

}

int compare(int n1, int n2, int n3) {

    int hasil;
    // && merupakan operator AND
    if(n1 >= n2 && n1 >= n3) {

        hasil = n1;

    } else if(n2 >= n1 && n2 >= n3) {

        hasil = n2;

    } else {

        hasil = n3;
    }

    return hasil;

}

int boolean() {
    // tanda ! adalah operator NOT
    if (!(2 < 5)) {

        printf("True");

    } else {

        printf("false");

    }
}

int main() {

    printf("%d\n", which(4,6));
    printf("%d\n", compare(5,7,10));
    printf(boolean());

    return 0;
}