//Adi Sulaksono_120140038
#include<iostream>
using namespace std;

int main(){
	int day;
	cin >> day;
	if(day==1){
		cout << "Hari Minggu";
	}else if(day==2){
		cout << "Hari Senin";
	}else if(day==3){
		cout << "Hari Selasa";
	}else if(day==4){
		cout << "Hari Rabu";
	}else if(day==5){
		cout << "Hari Kamis";
	}else if(day==6){
		cout << "Hari Jumat";
	}else if(day==7){
		cout << "Hari Sabtu";
	}else{
		cout << "Tidak terdapat nama hari ke-8";
	}
	return 0;
}
