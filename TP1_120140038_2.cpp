//NIM/Nama : 120140038/Adi Sulaksono
//Nama file : TP1_120140038_2.cpp
//Tanggal : 13 November 2020
//Deskripsi: Flowchart

#include <iostream>
using namespace std;

int main() {
	string nama ;
	string nim ;
	string username;
	string password;
	nama="qwerty";
	nim="12345";
	
	cout<<"Masukkan Username : ";
	cin>>username;
	
	cout<<"Masukkan password : ";
	cin>>password;
	
	if(username==nama&&password==nim){
		cout<<"Login sukses"<<endl;
	}else{
		cout<<"Login gagal"<<endl;
	}
	return 0;
}
