#include<stdio.h>

int genap(int nxu);

int genap(int nxu) {
 if(nxu % 2 == 0) {
  return 1;
 }else {
  return 0;
 }
}

int main() {
 int nomor;
 printf("Masukkan Nomor : ");scanf("%d", &nomor);
 if(genap(nomor)) {
  printf("%d adalah Genap", nomor);
 } else {
  printf("%d adalah Ganjil", nomor);
 }
}
