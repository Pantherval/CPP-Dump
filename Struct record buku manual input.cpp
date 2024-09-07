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
	buku book[3];
	
	cout << "masukkan ISBN " ;
	cin  >> book[0].isbn;
	cout << "masukkan judul " ;
	cin  >> book[0].judul;
	cout << "masukkan nama pengarang " ;
	cin  >> book[0].pengarang;
	cout << "masukkan jumlah halaman " ;
	cin  >> book[0].halaman;
	cout << "masukkan penerbit " ;
	cin  >> book[0].penerbit;

	cout << "masukkan ISBN " ;
	cin  >> book[1].isbn;
	cout << "masukkan judul " ;
	cin  >> book[1].judul;
	cout << "masukkan nama pengarang " ;
	cin  >> book[1].pengarang;
	cout << "masukkan jumlah halaman " ;
	cin  >> book[1].halaman;
	cout << "masukkan penerbit " ;
	cin  >> book[1].penerbit;

	cout << "masukkan ISBN " ;
	cin  >> book[2].isbn;
	cout << "masukkan judul " ;
	cin  >> book[2].judul;
	cout << "masukkan nama pengarang " ;
	cin  >> book[2].pengarang;
	cout << "masukkan jumlah halaman " ;
	cin  >> book[2].halaman;
	cout << "masukkan penerbit " ;
	cin  >> book[2].penerbit;
	
	cout <<"Data Pertama \n"; 
	cout <<"ISBN : " << book[0].isbn << endl;
	cout <<"Judul buku : " << book[0].judul << endl;
	cout <<"Pengarang : " << book[0].pengarang << endl;
	cout <<"Jumlah Halaman : " << book[0].halaman << endl;
	cout <<"Penerbit buku : " << book[0].penerbit << endl;
	
	cout << "Data Kedua \n";
	cout <<"ISBN : " << book[1].isbn << endl;
	cout <<"Judul buku : " << book[1].judul << endl;
	cout <<"Pengarang : " << book[1].pengarang << endl;
	cout <<"Jumlah Halaman : " << book[1].halaman << endl;
	cout <<"Penerbit buku : " << book[1].penerbit << endl;

	cout << "Data Ketiga \n";
	cout <<"ISBN : " << book[2].isbn << endl;
	cout <<"Judul buku : " << book[2].judul << endl;
	cout <<"Pengarang : " << book[2].pengarang << endl;
	cout <<"Jumlah Halaman : " << book[2].halaman << endl;
	cout <<"Penerbit buku : " << book[2].penerbit << endl;
}
