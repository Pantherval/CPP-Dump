//Adi Sulaksono_120140038
#include <iostream>
using namespace std;

int trapesium(int bil1, int bil2, int bil3){ 
	int bangun1;
	bangun1 = ((bil1+bil2)*bil3)/2;
	return bangun1;
}
int ketupat(int bil1, int bil2){ 
	int bangun2;
	bangun2 = 0.5*bil1*bil2;
	return bangun2;
}
int lingkaran(int bil1){ 
	int bangun3;
	bangun3 = 3.14*bil1*bil1;
	return bangun3;
}
int main(){
	int a, b, c, d, bangun;
	
	cout << "Pilih bangun datar yang ingin dihitung luasnya\n";
	cout << "1. Trapesium\n";
	cout << "2. Belah Ketupat\n";
	cout << "3. Lingkaran\n";
	cout << "Masukkan angka yang dipilih : ";
	cin  >> bangun;
	
	if(bangun=1){
		cout << "Inputkan sisi a trapesium : ";
		cin  >> a;
		cout << "Inputkan sisi b trapesium : ";
		cin  >> b;
		cout << "Inputkan tinggi trapesium : ";
		cin  >> c;
		
		d = trapesium(a,b,c);
		cout << "Luas bangun trapesium anda adalah : "<< d <<endl;
	}else if(bangun=2){
		cout << "Inputkan diagonal 1 belah ketupat : ";
		cin  >> a;
		cout << "Inputkan diagonal 2 belah ketupat : ";
		cin  >> b;

		d = ketupat(a,b);
		cout << "Luas bangun belah ketupat anda adalah : "<< d <<endl;
	}else if(bangun=3){
		cout << "Inputkan jari-jari lingkaran : ";
		cin  >> a;

		d = lingkaran(a);
		cout << "Luas bangun lingkaran anda adalah : "<< d <<endl;
	}
}
