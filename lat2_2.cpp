#include <stdio.h>
main()
{
    int panjang, tinggi, lebar, luas, volume;
    printf ("masukan panjang :");scanf("%d",&panjang);
    printf ("masukan lebar :");scanf("%d",&lebar);
    printf ("masukan tinggi :");scanf("%d",&tinggi);
    luas=(2*panjang*lebar)+(2*panjang*tinggi)+(2*tinggi*lebar);
    volume=panjang*lebar*tinggi;
    printf("jadi luasnya adalah :%d\n",luas);
    printf("jadi volume adalah :%d\n",volume);
}
