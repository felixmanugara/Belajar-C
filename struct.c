#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* struct merupakan cara
penulisan program pada bahasa
C, yang cara penggunaannya sama 
seperti class */

struct Student 
{
    char *name;
    char *major;
    int age;
    double gpa;
};

int main() 
{
   struct Student student1, student2;

   student1.name = "felix";
   student1.major = "Computer Science";
   student1.age = 21;
   student1.gpa = 3.3;

   printf("nama siswa: %s\n", student1.name);
   printf("jurusan siswa: %s\n", student1.major);
   printf("umur siswa: %d\n", student1.age);
   printf("ipk siswa: %.1f\n\n", student1.gpa);

   student2.name = "marco";
   student2.major = "Information System";
   student2.age = 21;
   student2.gpa = 3.6;

   printf("nama siswa: %s\n", student2.name);
   printf("jurusan siswa: %s\n", student2.major);
   printf("umur siswa: %d\n", student2.age);
   printf("ipk siswa: %.1f\n", student2.gpa);



}