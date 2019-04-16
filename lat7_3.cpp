#include<iostream>
using namespace std;
void tukar(int x, int y);
main()
{
    int a,b;
    a=99;
    b=11;
    cout<<"nilai sebelum pemanggilan fungsi :\n";
    cout<<"nilai a=%d"<<a;
    cout<<" " "nilai b="<<b<<endl;
    tukar(a,b);
    cout<<"nilai sesudah pemanggilan fungsi :\n";
    cout<<"nilai a="<<a;
    cout<<" " "niali b="<<b<<endl;

}
void tukar (int px, int py)
{
    int z;
    int L=px;
    px=py;
    py=z;
    cout<<"nilai diakhir funsi :\n";
    cout<<"nilai px="<<px;
    cout<<" " "nilai py="<<py<<endl;
}
