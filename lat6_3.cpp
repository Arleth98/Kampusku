#include<iostream>
#include<ctype.h>
using namespace std;
main()
{
    int nomer, bagi, sisah;
    char charpilihan;
    do
    {
    cout<<"masukkan suatu bilangan :";
    cin>>nomer;
    cout<<"masukkan bilangan pembagi [2,3,4,5] :";
    cin>>bagi;
    /*cout<<"bilangan yang di pilih :"<<endl;
    cin>>nomer;
    cout<<"bilangan pembagi :"<<endl;
    cin>>bagi;*/

    sisah=nomer%bagi;
    if(sisah)
    {
        cout<<"sisa bagi : tidak ada\n";
    }
    else
    {
        cout<<"sisah bagi :"<<sisah<<endl;
    }
    cout<<"napakah anda ingin meneruskan? (y/n):";
    cin>>charpilihan;
    }
    while((charpilihan)=='y');
}
