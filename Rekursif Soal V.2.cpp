#include<iostream>
using namespace std;

int ngapaya(int n){
	if(n==1){
		return 1;
	}else{
		return (n+ngapaya(n-1));
	}
}
int main(){
	int n,hasil;
	cout<<"Masukkan Bilangan Bulat Positif :";
	cin>>n;
	hasil=ngapaya(n);
	cout<<"Hasil Akhirnya Adalah :"<<hasil;
}
