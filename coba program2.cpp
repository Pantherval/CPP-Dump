#include <iostream>
using namespace std;
int main(){
	//deklarasi variabel
	float suhu, hasil;
	int tc, pilihan;
	
	//pilihan menu
	cout<<"* TERMOMETER CELCIUS *"<<endl;
	cout<<"Pilihan Konversi"<<endl;
	cout<<"1.Celcius ke Reamur"<<endl;
	cout<<"2.Celcius ke Kelvin"<<endl;
	cout<<"3.Celcius ke Fahrenheit"<<endl;
	cout<<endl;
	
	//input testcase
	cout<<"testcase: ";
	cin>>tc;
	cout<<endl;

//percabangan
	if (pilihan==1){
		float suhu[2];
		//perulangan
		for (int a=1 ; a<=2 ; a++) {
	
			cout<<"Masukkan suhu = ";cin>>suhu[a];
			cout<<endl;		
		} 
		    int b;
		    cout<<"Pilih Hasil Percobaan = ";cin>>b;
		    cout<< "Hasil Akhir Suhu adalah = "<<(0.8*suhu)<<" C";
		    cout<<endl;	
	}
	else if (pilihan==2){
		float suhu[2];
		//perulangan
		for (int a=1 ; a<=2 ; a++) {	
			
			cout<<"Masukkan suhu = ";cin>>suhu[a];
			cout<<endl;	
		} 
		int b;
		    cout<<"Pilih Hasil Percobaan = ";cin>>b;
		    cout<< "Hasil Akhir Suhu adalah = "<<(suhu+273)<<" C";
		    cout<<endl;	
	}
	else if (pilihan==3){
		float suhu[2];
		//perulangan
		for (int a=1 ; a<=2 ; a++) {	
			
			cout<<"Masukkan suhu = ";cin>>suhu[a];
			cout<<endl;	
		} 
		int b;
		    cout<<"Pilih Hasil Percobaan = ";cin>>b;
		    cout<< "Hasil Akhir Suhu adalah = "<<(1.8*suhu)<<" C";
		    cout<<endl;	
	}
	}
