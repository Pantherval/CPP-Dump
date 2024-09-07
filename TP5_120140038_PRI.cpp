//NIM/Nama : 120140038/Adi Sulaksono
//Nama file : TP5_120140038_PRI.cpp
//Tanggal : 11 Desember 2020
//Deskripsi: Bilangan Prima
	
#include <iostream>
using namespace std;
	int main(){
	int a;
	cin>>a;cout<<endl;
	int prima = 1;
	for(int i=2; i<a; i++) {
		if(a%i==0)
			prima=0;
	}
		
		if (prima) {
			cout<<"Prima"<<endl;
		}else {
			cout<<"Bukan Prima"<<endl;
	}
	cin.get();
	return 0;
} 
