#include <iostream>
using namespace std;

int main() {
    float volume,p, l, t;
    const int a=0;
    
    cout << "Program menghitung volume balok \n";
    cout << "masukkan panjang : ";
    cin  >> p;
    cout << "masukkan lebar : ";
    cin  >> l;
    cout << "masukkan tinggi : ";
    cin  >> t;
    volume = p*l*t;
    cout << "volume balok adalah : "<< volume << endl;
    return 0;
}
//float = bilangan koma 
//string = nama dan NIM
//char = nama
//int = angka bil.bulat
