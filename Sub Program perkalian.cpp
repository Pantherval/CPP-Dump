#include <iostream>
using namespace std;

int perkalian(int bil_1, int bil_2){ //Ini adalah parameter formal
	int hasil;
	hasil = bil_1*bil_2;
	return hasil;
}

int main(){
	int a,b,c;
	a=5;
	b=10;
	c=perkalian(a,b);
	
	cout << "Hasil perkalian antara a dan b = "<< c;
}
