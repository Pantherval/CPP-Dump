#include <iostream>
using namespace std;

int main(){
	int a,b,n;
	string nama;
	string ulang;
	
	cout <<"==================================="<<endl;
	cout <<"PROGRAM PERHITUNGAN NILAI MAHASISWA"<<endl;
	cout <<"==================================="<<endl;
	
	do{
		cout <<"Inputkan nama mahasiswa : "; 
		cin >> nama ;
		cout <<"Inputkan nilai hasil UTS : "; 
		cin >> a ;
		cout <<"Inputkan nilai hasil UAS : "; 
		cin >> b ;
		n = (a+b)/2;
		cout << "Atas nama " << nama << " berikut nilai anda"<< endl;
		cout << "UTS : "<< a << endl;
		cout << "UAS : "<< b << endl;
		if(n>=80){
			cout << "Nilai rata-rata anda adalah "<< n << " dengan grade nilai A " <<endl;
		}else if(n>=70){
			cout << "Nilai rata-rata anda adalah "<< n << " dengan grade nilai B " <<endl;
		}else if(n>=60){
			cout << "Nilai rata-rata anda adalah "<< n << " dengan grade nilai C " <<endl;
		}else if(n<60){
			cout << "Nilai rata-rata anda adalah "<< n << " dengan grade nilai D " <<endl;
		}
		cout << "Ingin menghitung nilai lagi?";
		cin >> ulang;
	}while(ulang=="YA" || ulang=="ya");
	return 0;
}
