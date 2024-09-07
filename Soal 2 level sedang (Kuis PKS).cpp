#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	struct mahasiswa{ 
		string nim, nama, alamat;
		int tahun;
		float ipk;
	};
	int i,n;
	
	mahasiswa data[i];
	cout << "Input banyaknya data mahasiswa : ";
	cin >> n; 
    for(i=0;i<n;i++){
    	cout<<"Input Nama mahasiswa : ";
		cin >> data[i].nama;
    	cout<<"Input NIM mahasiswa : ";
		cin >> data[i].nim;
    	cout<<"Input IPK mahasiswa : ";
		cin >> data[i].ipk;
    	cout<<"Input tahun angkatan : ";
		cin >> data[i].tahun;
    	cout<<"Input alamat mahasiswa : ";
		cin >> data[i].alamat;
	}
	for (i=0;i<n;i++){
	if (data[i].tahun == 2017 && data[i].ipk <=2){
		cout << "Nama Mahasiswa : " << data[i].nama << endl;
    	cout << "NIM Mahasiswa : " << data[i].nim << endl;
    	cout << "IPK Mahasiswa : " << data[i].ipk << endl;
    	cout << "Tahun angkatan : " << data[i].tahun << endl;
    	cout << "Alamat mahasiswa : " << data[i].alamat << endl;
	}else{
		cout << "Tidak ada data dengan ketentuan yang anda berikan";
	}
}
	return 0;
}
