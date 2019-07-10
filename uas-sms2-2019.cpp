#include <iostream>
#include <stdlib.h>
using namespace std;

void diskonx(int total_harga);

main(){
	int inputx, jumlahx, total_harga;
	restartx:
	cout << "No. Daftar Barang \tTotal harga" << endl;
	cout << "1.  Kertas HVS \t\tRp. 45.500" << endl;
	cout << "2.  Pulpen \t\tRp. 2.500" << endl;
	cout << "3.  Pensil \t\tRp. 2.000" << endl;
	cout << "4.  Penghapus \t\tRp. 1.000" << endl << endl;
	cout << "Pilih Barang yang ingin di beli \t= ";
	cin >> inputx;

// Proses barang yang sudah di pilih
	switch (inputx)
	{
		case 1:
			{
				cout << " No Daftar Barang \tTotal harga" << endl;
				cout << " 1. Kertas HVS \t\tRp. 45.500" << endl;
				cout << "\n Jumlah jual \t= ";
				cin >> jumlahx;
				total_harga = jumlahx * 45500;
				cout << " Total Harga \t= Rp." << total_harga << endl;
				diskonx(total_harga);
				break;
			}
		case 2:
			{
				cout << " No Daftar Barang \tTotal harga" << endl;
				cout << " 2. Pulpen \t\tRp. 2.500" << endl;
				cout << "\n Jumlah jual \t= ";
				cin >> jumlahx;
				total_harga = jumlahx * 2500;
				cout << " Total Harga \t= Rp." << total_harga << endl;
				diskonx(total_harga);
				break;
			}
		case 3:
			{
				cout << " No Daftar Barang \tTotal harga" << endl;
				cout << " 3. Pensil \t\tRp. 2.000" << endl;
				cout << "\n Jumlah jual \t= ";
				cin >> jumlahx;
				total_harga = jumlahx * 2000;
				cout << " Total Harga \t= Rp." << total_harga << endl;
				diskonx(total_harga);
				break;
			}
		case 4:
			{
				cout << " No Daftar Barang \tTotal harga" << endl;
				cout << " 4. Penghapus \t\tRp. 1.000" << endl;
				cout << "\n Jumlah jual \t= ";
				cin >> jumlahx;
				total_harga = jumlahx * 1000;
				cout << " Total Harga \t= Rp." << total_harga << endl;
				diskonx(total_harga);
				break;
			}
		default:
			{
				cout << " Barang Yang anda inputkan Belum ada " << endl;
				break;
			}
	}

// proses jika mau melakukan input restartx/ restart
	char vote;
	cout << "\n Restart [Y/N] = ";
	cin >> vote;
	if (vote == 'y' || vote == 'Y')
	{
		system("cls");
		goto restartx;
	}
	else if (vote == 'n' || vote == 'N')
	{
		system("cls");
		cout << "\n Logout Program" << endl;
	}

}

// Fungsi untuk menghitung diskon dan total Bayar
void diskonx(int total_harga)
{
	if (total_harga < 100000)
	{
		int diskonx, total_bayar;
		cout << " Diskon \t= 1,5%" << endl;
		diskonx = 0.015 *total_harga;
		cout << " Total Diskon \t= Rp." << diskonx << endl;
		total_bayar = total_harga - diskonx;
		cout << " Total Bayar \t= Rp." << total_bayar << endl;
	}
	else if (total_harga >= 100000 && total_harga < 200000)
	{
		int diskonx, total_bayar;
		cout << " Diskon \t= 2,5%" << endl;
		diskonx = 0.025 *total_harga;
		cout << " Total Diskon \t= Rp." << diskonx << endl;
		total_bayar = total_harga - diskonx;
		cout << " Total Bayar \t= Rp." << total_bayar << endl;
	}
	else if (total_harga >= 200000 && total_harga <= 300000)
	{
		int diskonx, total_bayar;
		cout << " Diskon \t= 3%" << endl;
		diskonx = 0.03 *total_harga;
		cout << " Total Diskon \t= Rp." << diskonx << endl;
		total_bayar = total_harga - diskonx;
		cout << " Total Bayar \t= Rp." << total_bayar << endl;
	}
	else if (total_harga > 300000)
	{
		int diskonx, total_bayar;
		cout << " Diskon \t= 5%" << endl;
		diskonx = 0.05 *total_harga;
		cout << " Total Diskon \t= Rp." << diskonx << endl;
		total_bayar = total_harga - diskonx;
		cout << " Total Bayar \t= Rp." << total_bayar << endl;
	}
}
