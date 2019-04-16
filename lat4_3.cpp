#include<iostream>
using namespace std;
main()
{
    int beli, disc, total;
    cout<<"Masukkan Jumlah Pembelian : ";cin>>beli;
    cout<<"============================\n";
    if(beli<100000)
    {
        cout<<"Maaf, Bonus hanya berlaku untuk pembelian mininal\nRp100.000,-atau lebih\n";
    }
    else if(beli==200000)
    {
        cout<<"Selamat Anda mendapat Tiket ke Yogya";
    }
    else if(beli==300000)
    {
        cout<<"Selamat Anda mendapat Tiket ke Bali";
    }
    else if(beli==400000)
    {
        cout<<"Selamat Anda mendapat Jam Tangan Rolex";
    }
    else if(beli>99500000)
    {
        cout<<"Selamat Anda mendapat Tiket ke Swis";
    }
    else if(beli>100000&&beli<200000)
    {
        disc=0.05*beli;
        total=beli-disc;

    cout<<"Pembelian adalah :"<<beli<<endl;
    cout<<"Discount adalah :"<<disc<<endl;
    cout<<"Total Pembayaran adalah :"<<total<<endl;
    cout<<"Selamat anda mendapat Discout 5%";
    }
    else if(beli>200000&&beli<300000)
    {
        cout<<"Selamat Anda mendapat Tiket ke Yogya";
    }
    else if(beli>300000&&beli<400000)
    {
        cout<<"Selamat Anda mendapat Tiket ke Bali";
    }
    else if(beli>400000&&beli<500000)
    {
        cout<<"Selamat Anda mendapat Jam Tangan Rolex";
    }
    else if(beli>500000)
    {
        cout<<"Selamat Anda mendapat Tiket ke Swis";
    }

}
