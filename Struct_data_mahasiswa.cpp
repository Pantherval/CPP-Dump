#include <iostream>
using namespace std;

int main(){
	struct data{ 
		int NIM;
		string nama;
		string prodi;
		string jenjang;
		float IPK; 
	};
	
	int n;
	float nilai;
    cout << "Banyak data mahasiswa :";
    cin  >> n;
	data mahasiswa[n];
	
    for(int i=0; i<n; i++){
	    cout <<"Data Mahasiswa ke-"<<i+1<<endl;
	    cout <<"masukkan NIM :" ;
	    cin  >> mahasiswa[i].NIM;
	    cout << "masukkan nama :" ;
	    cin  >> mahasiswa[i].nama;
	    cout << "masukkan program studi :" ;
	    cin  >> mahasiswa[i].prodi;
	    cout << "masukkan jenjang :" ;
	    cin  >> mahasiswa[i].jenjang;
	    cout << "masukkan IPK " ;
	    cin  >> mahasiswa[i].IPK;
    }
    cout <<"Nilai ambang batas :";
    cin  >>nilai;
    for(int i=0; i<n; i++){
        if(mahasiswa[i].IPK>=nilai){
	    cout <<"a." << mahasiswa[i].NIM<< endl;
	    cout <<"b." << mahasiswa[i].nama << endl;
	    cout <<"c." << mahasiswa[i].prodi << endl;
	    cout <<"d." << mahasiswa[i].jenjang << endl;
	    cout <<"e." << mahasiswa[i].IPK << endl;
	    cout <<endl;
        }else{
            cout<<"Tidak ada nilai di ambang batas"<<nilai<<endl;
        }
    }
}