//link repl.it https://replit.com/join/pupjmgaifv-12o14oo38-adisu
#include <iostream>
using namespace std;

int main(){
// V -> Tegangan
// Rs -> Hambatan seri
// Rp -> Hambatan paralel
// I -> Kuat Arus
	float V, Rs, Rp, I, nilai, jumlah=0;
	int n;

	cout<<"Berapa jumlah hambatan tersusun paralel : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Masukkan nilai ke-"<<i+1<<" : ";
		cin>>nilai;
		jumlah += 1.0/nilai;
		}
	Rp = 1.0/jumlah;
	cout<<"Jumlah nilai hambatannya : "<<Rp<<endl;

	cout<<"Berapa jumlah hambatan yang tersusun seri : ";
	cin>>n;
	jumlah=0;
	for(int i=0;i<n;i++){
		cout<<"Masukkan nilai ke-"<<i+1<<" : ";
		cin>>nilai;
		Rs += nilai;
	}
	cout<<"Jumlah nilai hambatannya : "<<Rs<<endl;

	cout<<"Berapa jumlah baterai yang tersusun seri : ";
	cin>>n;
	jumlah=0;
	for(int i=0;i<n;i++){
		cout<<"Masukkan nilai ke-"<<i+1<<" : ";
		cin>>nilai;
		V += nilai;
	}
	cout<<"Jumlah nilai tegangannya : "<<V<<endl;

	cout<<"Nilai kuat arus pada Amperemeter adalah : ";
	I=V/(Rs+Rp);
	cout<<I<<endl;
	return 0;
	}
