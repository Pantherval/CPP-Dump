#include <iostream>
using namespace std;

int aneh(int a, int b){ //Ini adalah parameter formal
	int hasil;
	if (a>b){
		hasil = a*b;
	}else if(a<b){
		hasil = b-a;
	}
	return hasil;
}
int main(){
	int a,b;
	cout<<"Inputkan nilai A = ";
	cin>>a;
	cout<<"Inputkan nilai B = ";
	cin>>b;
	
	cout << "Hasil = "<< aneh(a,b);
	
}


