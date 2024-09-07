#include <iostream>
using namespace std;

int AVG(int bil_1, int bil_2, int bil_3){ //Ini adalah parameter formal
	int hasil;
	hasil = (bil_1+bil_2+bil_3)/3;
	return hasil;
}

int main(){
	int a,b,c,d;
	a=2;
	b=3;
	c=4;
	d=AVG(a,b,c);
	
	cout << "Hasil rata-rata = "<< d;
}
