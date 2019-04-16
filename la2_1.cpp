#include <stdio.h>
main()
{
    int panjang, lebar, luas, keliling;
    printf("masukan panjang persegi panjang:");scanf("%d",&panjang);
    printf("masukan lebar persegi panjang:");scanf("%d",&lebar);
    luas=panjang*lebar;
    keliling=2*(panjang+lebar);
    printf("jadi luas persegi panjang adalah :%d\n",luas);
    printf("jadi keliling persegi panjang adalah :%d\n",keliling);
}
