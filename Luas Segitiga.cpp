#include <iostream>
using namespace std;

int main() {
    float luas, a, t; 
    
    cout << "Program menghitung luas segitiga "<<endl;
    cout << "masukkan panjang alas : ";
    cin  >> a;
    cout << "masukkan tinggi segitiga : ";
    cin  >> t;
    
    luas = (a*t)/2;
    
	cout << "luas segitiga : "<< luas << endl;
    return 0;
}
//float untuk decimal, int untuk bilangan bulat, string untuk nim dan nama, char untuk satu buah huruf
//catatan : (tanda kali *) (tanda bagi /) (tanda tambah +) (tanda kurang -) (tanda habis dibagi %)
