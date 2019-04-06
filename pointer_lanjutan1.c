#include "conio.h"
#include "stdio.h"
main()
{
char yuu;
 int ini_kalimat = 0;
 int ini_space = 0;

 printf("Ketikkan Sebuah Kalimat\n");
 printf("-----------------------\n");

 while((yuu = getchar()) !='\n' ){
  ini_kalimat++;
 }

 // Cetak Semua Statement & variable
 printf("\nJumlah Karakter  = %i \n\n",ini_kalimat);
}
