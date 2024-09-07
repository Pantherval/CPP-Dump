/*Adi Sulaksono_120140038
PR 3 Pak Meida Cahyo
9 Februari 2021*/
#include <iostream>
using namespace std;

int main(){
    int i,n,sum1=0,sum2=0;
    
    cout << "Masukkan Bilangan ke N : " << endl;
    cin  >> n;
 
	cout << "Jumlah semua bilangan ganjil dan genap antara 1 & " << n << endl;
		for(i=1; i<=n; i++){
			sum1 = sum1 += (i%2==1);
			sum2 = sum2 += (i%2==0);
		}   
	cout << "Ganjil : " << sum1 << endl;
	cout << "Genap  : " << sum2 << endl;
	return 0;
}
