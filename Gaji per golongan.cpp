/*Adi Sulaksono
TPB 49 120140038*/

#include <iostream>
using namespace std;

int main() { 
    float jam, golongan;
    
    cout << "Total gaji karyawan PT.Maju Selalu \n";
    cout << "masukkan nomor golongan :";
    cin  >> golongan; 
    cout << "masukkan total jam kerja : ";
    cin  >> jam; 
    
    if(golongan == 1){
    	cout << "Total gaji karyawan : "<< 10000 * jam ;
	}else if (golongan == 2){
		cout << "Total gaji karyawan : "<< 12500 * jam ;
	}else if (golongan == 3){
		cout << "Total gaji karyawan : "<< 15000 * jam ;
	}else if (golongan == 4){
		cout << "Total gaji karyawan : "<< 17500 * jam ;
	}else if (golongan == 5){
		cout << "Total gaji karyawan : "<< 20000 * jam ;
	}
    return 0;
}
