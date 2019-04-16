#include<stdio.h>
int main()
{
 int i,j,x;
 int matrix[3][4]={{1,8,1,0},{1,1,4,0},{0,0,3,9}};
 int nim[12]={1,8,1,0,1,1,4,0,0,0,3,9};

    /* TAMPILKAN MATRIK NIM */
    printf("\tAyyub Muhammad - 181011400039\n");
    printf("\t\tMatriks 4x3\n");
    for (i=0;i<3;i++){
        for (j=0;j<4;j++)
        {
            printf("%9d",matrix[i][j]);
        }
        printf("\n\n");
    }
    // Hasil
    printf("\t    Karna menampilkan NIM\n\t\t");
    for(x=0;x<12;x++){
        printf("%1d",nim[x]);
    }
    printf("\n\n");
    return 0;
}
