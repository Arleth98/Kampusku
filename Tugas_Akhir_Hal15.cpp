#include<stdio.h>
main()
{
float pi=3.14;
int r, volume, luas;
    printf ("masukan jari-jari bola :");scanf("%d",&r);

    luas=(4*pi*r*r);
    volume=(4/3)*pi*r*r*r;
    printf("jadi luasnya adalah :%d\n",luas);
    printf("Jadi volumenya adalah :%d\n",volume);
}
