#include<iostream>
using namespace std;

int main(){
	int i, n;
	long long int hasil=1;

		cout<<"Masukan angka = ";
		cin>> n;

	for(i=n; i>=1;i--){
		hasil=hasil*i;
	}
	cout<<"Hasil Faktorial= "<<hasil;
}
