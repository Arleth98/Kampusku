#include<iostream>
using namespace std;
int factorial(int n)

{
    if(n==1)
    {
        return(1);
    }
    else
    {
        return(n*factorial(n-1));
    }
}
main()
{
    int x;
    cout<<"Perameter rekursi dan factorial\n";
    cout<<"===============================\n\n";
    cout<<"Mencari nilai factorial\n";
    cout<<"Masukkan nilai x :";
    cin>>x;
    cout<<"Nilai factorial dari "<<x<<endl;
    cout<<factorial(x);
}
