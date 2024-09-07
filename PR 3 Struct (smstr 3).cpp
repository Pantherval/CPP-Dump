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

void ubah(float *a, float *b){
  float tmp;
  tmp=*a;
  *a = *b;
  *b = tmp;
}
int main(){
	int n,cari,found=0;
	int total;
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
  
  for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(data[i].ipk>data[j].ipk){
                ubah(&data[j].ipk, &data[i].ipk);
            }
        }
    }
    
    rata=total/n;
    
    cout<<"Rata-Rata IPK : "<<rata<<endl;
    cout<<"IPK tertinggi adalah "<<data[0].nama<<" dengan IPK : "<<data[0].ipk;
    
    
}
