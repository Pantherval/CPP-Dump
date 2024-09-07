#include <iostream>
using namespace std;

int main(){
	struct buku{ 
		string isbn;
		string judul;
		string pengarang;
		int halaman;
		string penerbit;
	};
	buku book[5];
	
	for(int i=0; i<5 ;i++){
	cout << "masukkan ISBN ke- "<< i+1<<" :" ;
	cin  >> book[i].isbn;
	cout << "masukkan judul "<< i+1<<" :" ;
	cin  >> book[i].judul;
	cout << "masukkan nama pengarang "<< i+1<<" :" ;
	cin  >> book[i].pengarang;
	cout << "masukkan jumlah halaman "<< i+1<<" :" ;
	cin  >> book[i].halaman;
	cout << "masukkan penerbit "<< i+1<<" :" ;
	cin  >> book[i].penerbit;
	}
	for(int i=0; i<5 ;i++){
	cout <<"ISBN : " << book[i].isbn << endl;
	cout <<"Judul buku : " << book[i].judul << endl;
	cout <<"Pengarang : " << book[i].pengarang << endl;
	cout <<"Jumlah Halaman : " << book[i].halaman << endl;
	cout <<"Penerbit buku : " << book[i].penerbit << endl;
	}
}
