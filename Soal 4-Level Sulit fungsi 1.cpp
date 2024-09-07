#include <iostream>
using namespace std;
int indeks = 1;
int proses(int a, int b){
	if(a%2!=0)
		return(a*b);
	else
		return 1;
}

int tampil(int input){
	if(input%2==0){
		return indeks;
	}else{
		int hasil = proses(input, indeks);
		indeks++;
		return hasil;
	}
}

int main(){
	int jumlah = 100,i=1;
	
	while (i<=jumlah){
		if((i/10==2) || (i % 20==0)){
			int hasil = tampil(i);
			cout << hasil << " ";
			i++; 
		}else{
			i+=5;
		}
	}
	cout << endl;
	
	return 0;
}
