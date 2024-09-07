#include <iostream>
using namespace std;

float keliling(float r, float pi){ 
	float keliling;
		keliling= 2*pi*r;
	return keliling;
}

float luas(float r,float pi){
	float luas;
		luas= pi*r*r;
	return luas;
}
int main(){
	float a,b,r;
	const float pi = 3.14;
	cout <<"Program menghitung keliling dan luas lingkaran\n";
	cout <<"Inputkan jari-jari lingkaran = ";
	cin  >>r;
	a=keliling(r,pi);
	b=luas(r,pi);
	
	cout << "Hasil volume= "<< a <<endl;
	cout << "Hasil volume= "<< b <<endl;
}


