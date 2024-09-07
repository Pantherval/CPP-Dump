//Adi Sulaksono_120140038
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Masukkan sebuah bilangan bulat: ";
    cin >> n;
    
    int i=2;
    bool isPrime = true;
    while(i<n && isPrime){
        if(n%i==0 && n!=2 && n!=3){
            isPrime = false;
        }
        i++;
    }
	if(isPrime && n!=0 && n!=1){
	    cout<< "Bilangan yang dimasukan adalah bilangan prima";
	}else{
	    cout<< "Bilangan yang dimasukan BUKAN bilangan prima";
	}
	return 0;
}
