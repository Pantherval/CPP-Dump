//NIM/Nama : 120140038/Adi Sulaksono
//Nama file : TP1_120140038_3.cpp
//Tanggal : 13 November 2020
//Deskripsi: Covid 19 zone problem

#include <iostream>
using namespace std;

int main() {
	int n;
	
	cin >>n;
    
    
    if (n>=1&&n<=10){
        cout<<"Zona Kuning"<<endl;
    }else if(n>10){
        cout<<"Zona Merah"<<endl;
	}else {
		cout<<"Zona Hijau"<< endl;
	}
	return 0;   
        
}
