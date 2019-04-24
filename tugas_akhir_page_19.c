#include <stdio.h>
#include <conio.h>
main(){
    float kode;
    printf("======== Masukan nilai [1-7] Untuk Menampilkan Hari ========\n");
    printf("Input : ");
    scanf("%f", &kode);

// Decision If and Else
    if(kode == 1){
        printf("1 = Hari Senin\n");
    }
    else if(kode == 2){
       printf("2 = Hari Selasa\n");
    }
    else if(kode == 3){
       printf("3 = Hari Rabu\n");
    }
    else if(kode == 4){
       printf("4 = Hari Kamis\n");
    }
    else if(kode == 5){
       printf("5 = Hari Jumat\n");
    }
    else if(kode == 6){
       printf("6 = Hari Sabtu\n");
    }
    else if(kode == 7){
       printf("7 = Hari Minggu\n");
    }
    else {printf("Kodenya Error tuh..\n");}
}
