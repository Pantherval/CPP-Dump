#include <iostream>
using namespace std;

int main(){
	struct mobil{ //Tipe data bentukan dari data primitif
		string merk;
		string warna;
		int harga;
		float cc;
	};
	mobil bus;
	mobil sedan;
	
	bus.merk = "Toyota";
	bus.warna = "biru";
	bus.harga = 500000000;
	bus.cc = 250.5;
	
	cout << bus.merk << endl;
	cout << bus.warna << endl;
	cout << bus.harga << endl;
	cout << bus.cc << endl;
	
	sedan.merk = "Daihatsu";
	sedan.warna = "putih";
	sedan.harga = 250000000;
	sedan.cc = 150.5;
	
	cout << sedan.merk << endl;
	cout << sedan.warna << endl;
	cout << sedan.harga << endl;
	cout << sedan.cc << endl;
}
