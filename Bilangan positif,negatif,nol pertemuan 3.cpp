#include <iostream>
using namespace std;

int main() {
    int bil;
    
    cout << "masukkan bilangan :";
    cin  >> bil;
    
    if (bil<0){
    	cout << "angka " << bil << " adalah bilangan negatif";
	}else if (bil>0){
		cout << "angka " << bil << " adalah bilangan positif";
	}else {
		cout << "angka " << bil << " adalah bilangan nol";
	}
    return 0;
}

