//Adi Sulaksono_120140038_16/02/2021
//---------------STUDI KASUS--------------------
#include <iostream>
using namespace std;

int main() { 
    float TC;
    char Konversi;
    
    cout<<"KONVERSI SUHU CELCIUS "<<endl;
	cout<<"Masukan Suhu (Celsius) : ";
	cin>> TC;
	cout<<"Masukkan konversi suhu F/R/K : ";
	cin>> Konversi;
	
	switch (toupper(Konversi)){
        case 'F':
            cout << "Fahrenheit : " << (TC*9/5)+32 <<endl;
            break;
        case 'R':
        	cout << "Reaumur    : " << (TC*4/9)-32<<endl;
        case 'K':
            cout << "Kelvin     : " << TC+273 <<endl;
            break;
        default :
        	cout << "Error";
    }
	
	return 0;
}
//----------------------------------------------

//--------------STUDI KASUS TAMBAHAN------------
#include <iostream>
using namespace std;

int main(){
    string Pass;

    for(int i=1;i<=4;i++){
    	cout << "Masukkan password akun anda"<< endl;
        cin >> Pass;
        if(Pass=="ITERA" || Pass=="itera"){
            cout << "login berhasil"<< endl;
            break;
        }else{
            if(i != 3){
                cout << "login gagal" <<  endl;
            }else{
                cout << "akun anda terkunci" << endl;
                break;
            }
        }
    }
    return 0;
}
//----------------------------------------------

//------------STUDI KASUS TAMBAHAN 2------------
#include<iostream>
using namespace std;

int main () {
	int n = 5;
	int bilangan[n];

	for (int i=0;i<n;i++){
		cin >> bilangan[i];
	}for (int i = 0; i < n; i++){
		if (bilangan[i] % 2 == 0){
			cout << "Bilangan " << bilangan[i] << " merupakan bilangan genap" << endl;
		}else{
			cout << "Bilangan " << bilangan[i] << " tidak termasuk bilangan genap";
			i = n;
		}
	}
	return 0;	
}
//----------------------------------------------

//------------STUDI KASUS TAMBAHAN 3------------
#include<iostream>
#include<math.h>
using namespace std;

int main () {
	int n[8];
	int t, ganjil = 0, genap = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> n[i];
		t = n[i] % 2;
		switch (t)
		{
		case 0:
			genap += 1;
			break;
		case 1:
			ganjil += 1;
			break;
		default:
			break;
		}
	}
	cout << "Bilangan genap : " << genap << endl;
	cout << "Bilangan ganjil : " << ganjil;
	
}
//----------------------------------------------
