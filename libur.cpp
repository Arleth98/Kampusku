#include<iostream>
using namespace std;
main()
{
    char menu;
    cout<<"Libur =\n";
    cout<<"===================\n";
    cout<<"a. Tidur\n";
    cout<<"b. Gabut di rumah\n";
    cout<<"c. Jalan-jalan\n";
    cout<<"d. Ngerjain tugas\n";
    cout<<"===================\n";
    cout<<"Masukkan pilihan :";cin>>menu;

    switch(menu)
    {
       case 'a':
    cout<<"Libur = Tidur";break;
case 'b':
    cout<<"Libur = Gabut di rumah";break;
case 'c':
    cout<<"Libur = Jalan - jalan";break;
case 'd':
    cout<<"Libur = Ngerjain tugas";break;

    }


}
