#include<iostream>
using namespace std;

int main(){
	float uts,uas,tugas,kuis,total;
	
	cout<<"Inputkan nilai hasil uts : ";
	cin >>uts;
	cout<<"Inputkan nilai hasil uas : ";
	cin >>uas;
	cout<<"Inputkan nilai hasil tugas : ";
	cin >>tugas;
	cout<<"Inputkan nilai hasil kuis : ";
	cin >>kuis;
	
	total=(uts*0.3)+(uas*0.35)+(tugas*0.25)+(kuis*0.1);
	
	if(total>=80){
		cout<<"Nilai mutu adalah A";
	}else if(total>=70){
		cout<<"Nilai mutu adalah AB";
	}else if(total>=60){
		cout<<"Nilai mutu adalah B";
	}else if(total>=50){
		cout<<"Nilai mutu adalah C";
	}else if(total>=40){
		cout<<"Nilai mutu adalah D";
	}else if(total>=30){
		cout<<"Nilai mutu adalah E";
	}else{
		cout<<"Anda tidak lulus";
	} 
	return 0;
}
