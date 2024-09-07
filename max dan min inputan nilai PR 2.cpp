/*Adi Sulaksono_120140038
PR 2 Pak Meida Cahyo
9 Februari 2021*/

#include <iostream>
using namespace std;

int main(){
	int a, max=0, min=0, b, n, i=1 ;
	
	cout << "Masukkan bilangan ke N yang diinginkan = "; 
	cin  >> b;

    for (a=1; a<=b; a++){
	   cout << "Masukkan angka " << i++ << "= "; 
	   cin  >> n;

       if (a==1){
        	min=n;
            max=n;
    	}else if (min>n){
            min=n;
        }else if (max<n){
            max = n;
        }
    }
    cout << endl;
    cout << "Nilai minimumnya adalah " <<  min << endl;
    cout << "Nilai maksimumnya adalah " <<  max << endl; 
	return 0;
}
