#include <stdio.h>

// Cetak Angka Ganjil Genap dari NIM
// NIM 181011400039

main() {
  int i;

  printf("-----------------------------------\n");
  printf("NIM Ayyub Muhammad : 181011400039\n");
  printf("-----------------------------------\n");
  printf("Genap : ");
  for (i=0; i<10; i++) {
        if(i%2 == 0){
             if(i<=8 && i>=0 && i!=2 && i!=6){
             printf("%d ", i);
             }
        }
  }
  printf("\n");
  printf("Ganjil : ");
  for (i=1; i<10; i++){
        if(i%2 == 1){
            if(i<=9 && i>0 && i!=7 && i!=5){
            printf("%d ", i);
            }
        }
    }
printf("\n");
}
