#include <iostream>
using namespace std;

main()
{
    float p, l, a, t, r, L, K, phi=3.14;
    char menu;
    cout<<"Menghitung Luas dan Keliling\n";
    cout<<"============================\n";
    cout<<"P. Persegi Panjang\n";
    cout<<"S. Segitiga\n";
    cout<<"L. Lingkaran\n";
    cout<<"============================\n";
    cout<<"Pilih :";cin>>menu;
    cout<<"============================\n";


    switch(menu)
    {
    case 'P':
        cout<<"Menghitung Luas dan Keliling Persegi Panjang\n";
        cout<<"Masukkan Panjangnya :";cin>>p;
        cout<<"Masukkan Lebarnya :";cin>>l;
        cout<<"============================\n";
        L=p*l;
        K=2*(p+l);
        cout<<"Luasnya adalah :"<<L<<endl;
        cout<<"Kelilingnya adalah :"<<K<<endl;break;
    case 'S':
        cout<<"Menghitung Luas dan Keliling Segitiga\n";
        cout<<"Masukkan Alas :";cin>>a;
        cout<<"Masukkan Tinggi :";cin>>t;
        cout<<"============================\n";
        L=a+a+a;
        K=a*t/2;
        cout<<"Luasnya adalah :"<<L<<endl;
        cout<<"Kelilingnya adalah :"<<K<<endl;break;
    case 'L':
        cout<<"Menghitung Luas dan Keliling Lingkaran\n";
        cout<<"Masukkan Jari-jarinya :";cin>>r;
        cout<<"============================\n";
        L=phi*r*r;
        K=2*phi*r;
        cout<<"Luasnya adalah :"<<L<<endl;
        cout<<"Kelilingnya adalah :"<<K<<endl;break;
    default:
        cout<<"Pilihan yang anda masukkan salah";
    }

}
