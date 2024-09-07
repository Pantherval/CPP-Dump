#include<iostream>
using namespace std;

int main(){
	int hari;
	
	cin >> hari;
	
	if(hari==31){
		cout << "Bulan Januari, Maret, Mei, Juli, Agustus, Oktober, Desember";
	}else if(hari==30){
		cout << "Bulan April, Juni, September, November";
	}else if(hari==28 || hari==29){
		cout << "Bulan Februari";
	}else{
		cout << "Tidak ada bulan yang sesuai";
	}
	return 0;
}
