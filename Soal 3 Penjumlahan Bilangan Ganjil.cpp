#include <iostream>
using namespace std;

int main(){
    int i,n,sum=0;

	cout<<"Masukkan Bilangan ke N : "<<endl;
	cin >>n;
	
	
		cout<<"Jumlah semua bilangan ganjil antara 1 & "<<n<<endl;
		for (int i = 1; i <= n; i++ ){
		sum = sum += (i%2==1);
		}
		
		cout<< sum;
	return 0;
}
