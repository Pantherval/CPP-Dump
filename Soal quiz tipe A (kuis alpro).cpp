#include<iostream>
using namespace std;
//Data yang diproses dalam algoritma 
	int data_angka[7] = {8, 10, 9, 2, 7, 15, 5};
//Subprogram untuk proses pengurutan 
	int proses(){
	int temp, jum = 0;
		for (int i=0; i<6; i++) { 
			for (int j=0; j<6-i; j++) {
//Pengecekan apakah urutan data harus di ubah 
	if (data_angka[j] > data_angka[j+1]) {
//Penukaran dua buah data yang urutannya salah 
	temp = data_angka[j]; 
	data_angka[j]=data_angka[j+1];
	data_angka[j]=temp;
//Banyaknya proses penukaran
	jum++;
		}
	}
}
return jum;

int main(){
	int hasil;
//Pemanggilan subprogran yang akan memproses pengurutan data 
	hasil = proses(); 
	cout << "Jumlah proses penukaran" << hasil << endl;
//Menampilkan data hasil dari proses pengurutan ke layar 
	for (int i<0 ; i<7 ; i++) {
	cout <<data_angka[i]<< " ";
}
	cout << endl;
	return 0;
}
