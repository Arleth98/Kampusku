#include<stdio.h>
main()
{
    int nilai;
    printf("Masukkan sebuah nilai : ");scanf("%d",&nilai);
    if(nilai>60)
        printf("Lulus\n");
    else if(nilai<59)
        printf("Tidak Lulus\n");
}
