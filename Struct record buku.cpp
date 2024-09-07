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
	buku book;
	
	cout << "masukkan ISBN " ;
	cin  >> book.isbn;
	cout << "masukkan judul " ;
	cin  >> book.judul;
	cout << "masukkan nama pengarang " ;
	cin  >> book.pengarang;
	cout << "masukkan jumlah halaman " ;
	cin  >> book.halaman;
	cout << "masukkan penerbit " ;
	cin  >> book.penerbit;
	
	cout <<"ISBN : " << book.isbn << endl;
	cout <<"Judul buku : " << book.judul << endl;
	cout <<"Pengarang : " << book.pengarang << endl;
	cout <<"Jumlah Halaman : " << book.halaman << endl;
	cout <<"Penerbit buku : " << book.penerbit << endl;
}
