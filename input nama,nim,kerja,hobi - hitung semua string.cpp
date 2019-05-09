#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main(){
	string nama_depan, nama_belakang, hasil_nama, nim;
	char pekerjaanx[23],hobiku[23];
	int jumlah, jumlah2;

	cout << "Input Nama depan :";getline (cin, nama_depan);
	cout << "Input Nama Belakang :";getline (cin, nama_belakang);
	cout << "Input NIM : ";getline (cin, nim);
	cout << "Input Pekerjaan :";cin.getline(pekerjaanx,sizeof(pekerjaanx));
	cout << "Input Hobi :";cin.getline(hobiku,sizeof(hobiku));
	
	hasil_nama = " " + nama_belakang;
	nama_belakang = hasil_nama;
	hasil_nama = nama_depan + nama_belakang;	
	cout << "\n";
	cout << "Nama : " << hasil_nama <<"\nNim : "<< nim <<"\nPekerjaan : "<<pekerjaanx<<"\nHobi : "<<hobiku<<endl;
// Rule of string	
	jumlah = nama_depan.length();
	jumlah2 = nama_belakang.length();
	cout << "\nPanjang String - Nama Depan = " << jumlah;
	cout << "\nPanjang String - Nama Belakang = " << jumlah2 <<endl;
// Huruf Besar
	cout << "Huruf Kapital Kerja = " << strupr(pekerjaanx)<<endl;
// Huruf Kecil
	cout << "huruf kecil dari hobi = "<< strlwr(hobiku) <<endl;
// Nama
	cout << "Nama depan = " << nama_depan<<endl;
	cout << "Nama Belakang = " << nama_belakang<<endl;
// Hasil
	cout << "\nHasil = "<< nama_depan << ", " << nama_belakang << ", " << nim << ", " << pekerjaanx << ", " << hobiku <<endl;
}
 
