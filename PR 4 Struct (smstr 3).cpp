//Adi Sulaksono_120140038
#include <iostream>
#include<iomanip>
using namespace std;

struct mahasiswa{
	int nim;
	string nama;
	float ipk;
	string alamat;
};

void ubah_ipk(float *a, float *b){
  float tmp;
  tmp=*a;
  *a = *b;
  *b = tmp;
}
void ubah_nim(int *a, int *b){
  int tmp;
  tmp=*a;
  *a = *b;
  *b = tmp;
}
void ubah_nama(string *a, string *b){
  string tmp;
  tmp=*a;
  *a = *b;
  *b = tmp;
}
void ubah_alamat(string *a, string *b){
  string tmp;
  tmp=*a;
  *a = *b;
  *b = tmp;
}

int main(){
	int n,cari,found=0;
	int total, cek;
	float rata;
	cout<<"Masukan banyaknya mahasiswa : ";
	cin>>n;	
	mahasiswa data[n];
	
	for(int i=0;i<n;i++){
		cout<<"Mahasiswa ke-"<<i+1<<endl;
		cout<<"Nama : ";
		cin >>data[i].nama;
		cout<<"NIM : ";
		cin >>data[i].nim;
		cout<<"Nilai IPK : ";
		cin >>data[i].ipk;
		cout<<"Alamat : ";
		cin >>data[i].alamat;
		
		total=total+data[i].ipk;
	}

  	cout<<"1.IPK"<<endl;
  	cout<<"2.NIM"<<endl;
  	cout<<"Input urutan data yang ingin ditampilkan berdasarkan : ";
  	cin>>cek;
  	cout<<"--------------------------"<<endl;
  	cout<<endl;
  	if(cek==1){
  	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(data[i].ipk>data[j].ipk){
                ubah_ipk(&data[i].ipk, &data[j].ipk);
                ubah_nama(&data[i].nama, &data[j].nama);
                ubah_nim(&data[i].nim, &data[j].nim);
                ubah_alamat(&data[i].alamat, &data[j].alamat);
            }
        }
    }cout<<"=============================[Pengurutan data dengan IPK]====================================="<<endl;
	}else if(cek==2){
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(data[i].nim>data[j].nim){
                ubah_ipk(&data[i].ipk, &data[j].ipk);
                ubah_nama(&data[i].nama, &data[j].nama);
                ubah_nim(&data[i].nim, &data[j].nim);
                ubah_alamat(&data[i].alamat, &data[j].alamat);
            }
        }
    }cout<<"=============================[Pengurutan data dengan NIM]===================================="<<endl;	
	}else{
		cout<<"Inputan salah"<<endl;
	}
	
	cout<<setiosflags(ios::left);
	cout<<setw(20)<<"NIM"<<setw(20)<<"Nama"<<setw(20)<<"IPK"<<setw(20)<<"Alamat"<<endl;
	cout<<"===================================================================================================================="<<endl;
	for(int i=0;i<n;i++){
		cout<<setw(20)<<data[i].nim<<setw(20)<<data[i].nama<<setw(20)<<data[i].ipk<<setw(20)<<data[i].alamat<<endl;
	}
	cout<<"===================================================================================================================="<<endl;
    rata=total/n;
    
	cout<<"Input NIM yang dicari : ";
  	cin>>cari;
  	cout<<"--------------------------"<<endl;
  	cout<<endl;
  	
  	for(int i=0;i<=n;i++){
	  	if (data[i].nim==cari){
		  found=1;
		  cout<<"Nama : "<<data[i].nama<<endl;
		  cout<<"NIM : "<<data[i].nim<<endl;
		  cout<<"IPK : "<<data[i].ipk<<endl;
		  cout<<"Alamat : "<<data[i].alamat<<endl;
	  }
  	}
  		if (found==0){
  			cout<<"Data tidak ditemukan"<<endl;
  	}
    
    cout<<"Rata-Rata IPK : "<<rata<<endl;
    cout<<"IPK tertinggi adalah "<<data[0].nama<<" dengan IPK : "<<data[0].ipk;
    
    
}
