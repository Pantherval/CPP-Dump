/*Adi Sulaksono
TPB 49 120140038*/

#include <iostream>
using namespace std;

int main() {
	char a;

	cout<<"masukkan huruf = ";
	cin>>a;
	if (a == 'a' || a == 'e' || a == 'i' || a == 'u' || a == 'o')
		cout<<"huruf vokal";
	else
		cout<<"huruf konsonan "<<endl;
	return 0;
}

