#include<iostream>
using namespace std;
main()
{
    int n, i;
    int A=0, B=1, C;

    cout<<"Masukkan N :";
    cin>>n;

    for(i=0; i<n-1; i++)
    {
        if(i==0)
        {
            cout<<A<<" "<<B<<" ";
        }
        else
        {
            C=A+B;
            A=B;
            B=C;
            cout<<C<<" ";
        }
    }
}
