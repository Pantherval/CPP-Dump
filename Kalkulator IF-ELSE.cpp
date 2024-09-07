/*Adi Sulaksono_120140038
PR 1 Pak Meida Cahyo 
9 Februari 2021*/
#include <iostream>
using namespace std;

int main() {
    int a,b,n;
    
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Pilih operasi aritmatika yang mau dilakukan : ";
    cin  >> n;
    cout << "Masukkan nilai angka pertama : ";
    cin  >> a;
    cout << "Masukkan nilai angka kedua : ";
    cin  >> b;
    
    if (n==1){
    	cout << "Hasil penjumlahan adalah " << a + b << endl;
	}else if (n==2){
		cout << "Hasil pengurangan adalah " << a - b << endl;
	}else if (n==3){
		cout << "Hasil perkalian adalah " << a * b << endl;
	}else if (n==4){
		cout << "Hasil pembagian adalah " << a / b << endl;
	}else{
		cout << "Kesalahan memasukkan pilihan";
	}
	return 0;
}
