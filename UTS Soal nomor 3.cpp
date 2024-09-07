#include <iostream>
using namespace std;
//Data yang harus diatur posisinya 
int data[10] = {7, 2, 4, 9, 8, 11, 10, 5, 13, 6};
// Subprogram untuk mengatur posisi data 
	int atur_data() {
		int ditemukan, temp, jum=0, i=0, j=9;
		
		while (i<j){
			//Mencari angka ganjil di bagian kiri pada data
			ditemukan = 0; 
			while (ditemukan!=1){
			if(i%2==1)ditemukan=1;
			else i++;
		}
		//Mencari angka genap di bagian kanan pada data 
			ditemukan = 0; 
			while (ditemukan != 1) {
			if (j%2==0) ditemukan = 1; 
			else j--;
		}
		//Melakukan penukaran untuk posisi data yang salah 
		if (i<j){
			temp=data[i];
			data[i]=data[j];
			data[j]=temp; 
			jum++;
		}
		i++; 
		j--;
	}
	return temp;
}
		int main() {
		int hasil = atur_data(); 
		cout << "Banyaknya pertukaran data = " << hasil << endl;
		for (int i=0;i<10;i++) {
			cout << data[i] << "  ";
		}
		cout << endl;
		
		return 0;
}
