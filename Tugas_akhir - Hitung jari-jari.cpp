#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    float jarinya,volume,luas;
    const float pi=3.14;

    cout<<"TUGAS AKHIR PERTEMUAN 2 "<<endl;
    cout<<endl;
    cout<<"Masukan Jari-Jari : ";cin>>jarinya;

    // Petunjuk
    volume=4/3*pi*pow(jarinya,3);
    luas=4*pi*pow(jarinya,2);

    cout<<"Volume Permukaan Bola = "<<volume<<endl;
    cout<<"Luas Permukaan Bola   = "<<luas<<endl;

}
