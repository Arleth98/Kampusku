#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
    int Kode;
    printf ("Masukkan Kode [1-7] :");scanf("%d",&Kode);

    if (Kode==1)
    {
        printf("Senin\n");
    }
    else if (Kode==2)
    {
        printf("Selasa\n");
    }
    else if (Kode==3)
    {
        printf("Rabu\n");
    }
    else if (Kode==4)
    {
        printf("Kamis\n");
    }
    else if (Kode==5)
    {
        printf("Jum'at\n");
    }
    else if (Kode==6)
    {
        printf("Sabtu\n");
    }
    else if (Kode==7)
    {
        printf("Minggu\n");
    }
    else if (Kode>7)
    {
        printf ("Pilihan tidak ada\n");
        printf ("===========================================================\n");
            printf ("Kode 1 hari Senin\n");
            printf ("Kode 2 hari Selasa\n");
            printf ("Kode 3 hari Rabu\n");
            printf ("Kode 4 hari Kamis\n");
            printf ("Kode 5 hari Jum'at\n");
            printf ("Kode 6 hari Sabtu\n");
            printf ("Kode 7 hari Minggu\n");
    }

}
