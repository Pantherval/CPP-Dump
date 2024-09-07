#include <iostream>
using namespace std;

int mintaseribu(){ //Ini adalah parameter formal
	return 1000;
}

int main(){
	int i;
	cout << "contoh pembuatan fungsi\n";
	i=mintaseribu(); //Ini adalah parameter aktual
	
	cout << "Nilai dari variabel i= "<< i;
}
