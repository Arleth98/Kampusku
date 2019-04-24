#include <stdio.h>

// Nama & NIM
void yuu(){
	printf("Ayyub Muhammad - 181011400039\n");
}

// Fungsi Nilai
	void nilai_a(){
		printf("Nilai A");
	}
	void nilai_b(){
		printf("Nilai B");
	}
	void nilai_c(){
		printf("Nilai C");
	}	

// Wrapper
int main(){
	int nilai;
	yuu(); // memanggil fungsi Nama & NIM
	printf("Masukkan Nilai atau Nomor : ");scanf("%d", &nilai);
	
	if(nilai>=0 && nilai<=60){
		nilai_c(); // memanggil fungsi nilai dari C
	}else if(nilai>=61 && nilai<=80){
		nilai_b(); // memanggil fungsi nilai dari B
	}else{
		nilai_a(); // memanggil fungsi nilai dari A
	}

}
