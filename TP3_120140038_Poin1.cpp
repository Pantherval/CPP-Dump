//NIM/Nama : 120140038/Adi Sulaksono
//Nama file : TP3_120140038_Poin1.cpp
//Tanggal : 27 November 2020
//Deskripsi: Segitiga inverted ke bawah

#include <iostream>
using namespace std;
	int main(){
	int a,b,c,d,n;

	cout<<"Input tinggi segitiga :";
	cin>>n;
	cout<<endl;

		for(a=1;a<=n;a++){
		for(b=1;b<=a;b++){
			cout<<" ";
		}for(c=b;c<=n;c++){
			cout<<"*",a;
		}for(d=b;d<=c;d++){
			cout<<"*",a;
	
		}cout<<endl;
	
	}
	return 0;
}
