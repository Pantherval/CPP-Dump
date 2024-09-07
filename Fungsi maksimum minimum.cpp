#include<iostream>
using namespace std;

int hitung(int a,int b,int c){
	if(a>b && a>c){
		cout<< a <<" lebih tinggi dibandingkan dengan "<< b <<" dan "<<c<< endl;
		cout<<"Lakukan Perbandingan Lagi?y/n :";
		string jawaban;
		cin>>jawaban;
		if(jawaban == "y"){
			
	cout<<"Masukkan Angka Pertama : ";
	cin>>a;
	cout<<"Masukkan Angka Kedua : ";
	cin>>b;
	cout<<"Masukkan Angka Ketiga :";
	cin>>c;
	
	cout<<hitung(a,b,c);
			
		}else{
			cout<<"Program Dihentikan";
		}
	}else if(b>a && b>c){
		cout<< b <<" lebih tinggi dibandingkan dengan "<< a <<" dan "<< c << endl;
		cout<<"Lakukan Perbandingan Lagi?y/n :";
		string jawaban;
		cin>>jawaban;
		if(jawaban == "y"){
			
	cout<<"Masukkan Angka Pertama : ";
	cin>>a;
	cout<<"Masukkan Angka Kedua : ";
	cin>>b;
	cout<<"Masukkan Angka Ketiga :";
	cin>>c;
	
	cout<<hitung(a,b,c);
			
		}else{
			cout<<"Program Dihentikan";
		}
	}else{
		cout<< c <<" lebih tinggi dibandingkan dengan "<< a <<" dan "<< b << endl;
		cout<<"Lakukan Perbandingan Lagi?y/n :";
		string jawaban;
		cin>>jawaban;
		if(jawaban == "y"){
			
	cout<<"Masukkan Angka Pertama : ";
	cin>>a;
	cout<<"Masukkan Angka Kedua : ";
	cin>>b;
	cout<<"Masukkan Angka Ketiga :";
	cin>>c;
	
	cout<<hitung(a,b,c);
			
		}else{
			cout<<"Program Dihentikan";
		}
	}
}
int main(){
	int a,b,c;
	
	cout<<"Masukkan Angka Pertama : ";
	cin>>a;
	cout<<"Masukkan Angka Kedua : ";
	cin>>b;
	cout<<"Masukkan Angka Ketiga :";
	cin>>c;
	
	cout<<hitung(a,b,c);
}
