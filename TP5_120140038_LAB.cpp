//NIM/Nama : 120140038/Adi Sulaksono
//Nama file : TP5_120140038_LAB.cpp
//Tanggal : 11 Desember 2020
//Deskripsi: Labil

#include <iostream>
using namespace std;
int main(){
	char array[10];
	
	for(int i=1; i<=10; i++){
		cin >> array[i];
	}
		
	for (int i=1; i<=10; i++){
		if(array[i]== '0' || array[i]== '1'){
		cout << "* ";
	}
		else if(array[i]== '5'){
		cout << "# ";
	}
		else{
			cout<< array[i]<< " ";
		}	
	}
	
	
	return 0;
}
