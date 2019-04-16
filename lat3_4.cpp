#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
    int nilai;
    printf ("Masukkan nilain :");scanf("%d",&nilai);
    if (nilai>81&&nilai<100)
    {
        printf("A\n");
    }
    else if (nilai>71&&nilai<81)
    {
        printf ("B\n");
    }
    else if (nilai>61&&nilai<71)
    {
        printf ("C\n");
    }
    else if (nilai>51&&nilai<61)
    {
        printf ("D\n");
    }
    else if (nilai<51)
    {
        printf ("E\n");
    }

    printf ("*===========================*\n");
    printf ("nilai > 81 dan < 100 maka A\n");
    printf ("nilai > 71 dan < 81 maka B\n");
    printf ("nilai > 61 dan < 71 maka C\n");
    printf ("nilai > 51 dan < 61 maka D\n");
    printf ("nilai < 51 maka E\n");

}
