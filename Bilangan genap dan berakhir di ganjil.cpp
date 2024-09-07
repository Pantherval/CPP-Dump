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
