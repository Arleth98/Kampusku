#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
    system("color: a");
    string user, pass;

    cout<<"Masukkan UserName : "; cin>>user;
    cout<<"Masukkan Password : "; cin>>pass;

    if(user == "Danis" && pass == "mantanterindah")
    {
       cout<<"Berhasil Login"<<endl;
    }

    else
    {
       cout<<"Gagal Masuk, Password Atau Username Anda Salah";
    }

getch;

return 0;

}
