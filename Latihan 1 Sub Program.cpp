#include <iostream>
using namespace std;

float volume(float d, float t){ 
	float hasil;
	const float pi = 3.14;
		hasil= ((d/2)*(d/2)) * t * pi/3;
	return hasil;
}
int main(){
	float d,t;
	cout <<"Program menghitung volume kerucut\n";
	cout <<"Inputkan diameter = ";
	cin  >>d;
	cout <<"Inputkan tinggi = ";
	cin  >>t;
	
	cout << "Hasil volume= "<< volume(d,t);
	
}


