#include<iostream>
using namespace std;

int main(){
	int a1,a2,a3,a4,a5;
	float tinggi;
	
	cout << "Masukan tinggi mahasiswa ke-1=";
	cin  >> a1;
	cout << "Masukan tinggi mahasiswa ke-2=";
	cin  >> a2;
	cout << "Masukan tinggi mahasiswa ke-3=";
	cin  >> a3;
	cout << "Masukan tinggi mahasiswa ke-4=";
	cin  >> a4;
	cout << "Masukan tinggi mahasiswa ke-5=";
	cin  >> a5;
	
	tinggi = (a1+a2+a3+a4+a5)/5;
	
	cout << "Jadi rata-rata tinggi ke 5 mahasiswa tersebut adalah=" << tinggi << endl;
	return 0;
}
