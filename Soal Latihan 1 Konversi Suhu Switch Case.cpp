#include <iostream>
using namespace std;

int main() { 
    float TC;
    char Konversi;
    
    cout<<"KONVERSI SUHU CELCIUS "<<endl;
	cout<<"Masukan Suhu (Celsius) : ";
	cin>> TC;
	cout<<"Masukkan konversi suhu F/R/K : ";
	cin>> Konversi;
	
	switch (toupper(Konversi)){
        case 'F':
            cout << "Fahrenheit : " << (TC*9/5)+32 <<endl;
            break;
        case 'R':
        	cout << "Reaumur    : " << TC*4/5 <<endl;
        case 'K':
            cout << "Kelvin     : " << TC+273.15 <<endl;
            break;
        default :
        	cout << "Error";
    }
	
	return 0;
}
