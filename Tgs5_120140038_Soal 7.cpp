//Adi Sulaksono_120140038
#include<iostream>
using namespace std;
 int main (){
 	int n;
 	
 	cout<<"masukkan nilai : ";
 	cin >> n;
 	for(int i=1;  i <= n; i++){
 		for(int j = 1; j <= n; j++){
			    ((i+j)%2==0)? cout << "#": cout << "o";
		 }
	 cout<<endl;
 	}
	 return 0;
 }
