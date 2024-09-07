#include <iostream>
using namespace std;

	int a,y,x,pilih;
	char ulang;
	
int main(){
			cout<<"====================="<<endl;
			cout<<"         MENU        "<<endl;
			cout<<"====================="<<endl;
		do{
			cout<<"1. Pengurangan"<<endl;
			cout<<"2. Penjumlahan"<<endl;
			cout<<"Pilih(1-2) :";
			cin>>a;
			cout<<"Masukkan dua buah nilai integer ";
			cin>>x>>y;
			if(a==1){
				cout<<"Hasil : "<<x-y<<endl;
			}else if(a==2){
				cout<<"Hasil : "<<y+x<<endl;
			}
			cout<<"Tekan Y atau y untuk ulangi ";
			cin>>ulang;
		}while(ulang=='Y' || ulang=='y');
		
}
