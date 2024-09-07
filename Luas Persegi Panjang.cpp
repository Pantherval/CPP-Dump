#include <iostream>
using namespace std; //Fungsinya untuk mengambil data yg ada

int main(){ //sebagai main program
	float p, l; //deklarasi variabel
	float luas;
	
	cout << "Program menghitung persegi panjang \n";
    cout << "masukkan panjang : ";
    cin  >> p;
    cout << "masukkan lebar : ";
    cin  >> l;
    
    luas = p*l;
    
    cout << "Hasil "<< luas << endl;
	return 0;
}

