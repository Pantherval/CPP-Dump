//NIM/Nama : 120140038/Adi Sulaksono
//Nama file : TP1_120140038_1.cpp
//Tanggal : 13 November 2020
//Deskripsi: Soal 4 (INput Nilai)

#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Input nilai 1 : "; 
	cin >> a;
    cout << "Input nilai 2 : "; 
	cin >> b;
    cout << "Input nilai 3 : "; 
	cin >> c;

    if ( a > b && a > c )
        cout <<  a << endl;
    else if ( b > a && b > c )
        cout << b << endl;
    else
        cout << c << endl;

    return 0;
}
