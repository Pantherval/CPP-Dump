#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	struct kendaraan{ 
		string merk,nama, asal;
		int noken,tahun;
	};
	int i,n;
	
	kendaraan mobil[i];
	cout << "Input banyaknya data kendaraan : ";
	cin >> n; 
    for(i=0;i<n;i++){
    	cin >> mobil[i].noken;
    	cin.ignore();  
		getline(cin,mobil[i].nama);
    	cin >> mobil[i].asal;
    	cin >> mobil[i].merk;
    	cin >> mobil[i].tahun;
	}
	for (i=0;i<n;i++){
	if (mobil[i].tahun == 2010 && mobil[i].asal == "Tulang Bawang"){
		cout << "Mobil dengan No.Kendaraan " << mobil[i].noken << endl;
    	cout << "Nama Pemilik " << mobil[i].nama << endl;
    	cout << "Asal Daerah Pemilik " << mobil[i].asal << endl;
    	cout << "Merk Kendaraan " << mobil[i].merk << endl;
    	cout << "Tahun Keluaran " << mobil[i].tahun << endl;
	}else{
		cout << "Tidak ada mobil dengan ketentuan yang anda berikan";
	}
}
	return 0;
}
