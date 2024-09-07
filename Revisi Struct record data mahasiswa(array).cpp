#include <iostream>
using namespace std;

int main(){
	struct nilai{
	string NIM;
	string nama;
	string matkul;
	int sks;
	string mutu;
	};
	nilai n[5];
	int a;
	cout << "Berapa banyak data yang ingin diinputkan?\n";
	cin  >> a;
	for(int i=0; i<a; i++){
	cout << "Masukkan NIM Mahasiswa ke-"<<i+1<<" : ";
	cin  >> n[i].NIM;
	cout << "Masukkan Nama Mahasiswa ke-"<<i+1<<" : ";
	cin  >> n[i].nama;
	cout << "Masukkan Mata Kuliah Mahasiswa ke-"<<i+1<<" : ";
	cin  >> n[i].matkul;
	cout << "Masukkan sks Mahasiswa ke-"<<i+1<<" : ";
	cin  >> n[i].sks;
	cout << "Masukkan nilai mutu Mahasiswa ke-"<<i+1<<" : ";
	cin  >> n[i].mutu;
	}
	for(int i=0; i<a; i++){
	cout << "NIM mahasiswa ke-"<<i+1<<" : "<< n[i].NIM << endl;
	cout << "Nama mahasiswa ke-"<<i+1<<" : "<< n[i].nama << endl;
	cout << "Mata Kuliah mahasiswa ke-"<<i+1<<" : "<< n[i].matkul << endl;
	cout << "Jumlah sks mahasiswa ke-"<<i+1<<" : "<< n[i].sks << endl;
	cout << "Nilai mutu mahasiswa ke-"<<i+1<<" : "<< n[i].mutu << endl;
	}
}
