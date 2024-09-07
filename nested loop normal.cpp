#include<iostream>
using namespace std;

	int main(){
		int n;
		cout<<"masukkan sebuah bilangan bulat: ";
		cin >>n;
		
		cout<<"pola 1 \n";
		
		for(int i=1 ; i<=n ; i++){
			for (int j=1;j<=i;j++){
			cout<<"#";
			}
		cout<<endl;
		}
		
		cout<<"pola 2 \n";
		
		for(int i=1 ; i<=n ; i++){
			for (int j=n;j>=i;j--){
			cout<<"#";
			}
			
		cout<<endl;
		}
		return 0;
	}
	
