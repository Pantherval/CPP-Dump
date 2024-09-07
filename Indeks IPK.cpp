#include <iostream>
using namespace std;

int main(){

    char indeks;

    cout << "Nilai mutu : ";
    cin >> indeks;

    switch (toupper(indeks)){
        case 'A':
            cout << "indeks nilai : 4" << endl;
            break;
        case 'AB':
        	cout << "indeks nilai : 3.5 " << endl;
        case 'B':
            cout << "indeks nilai : 3 " << endl;
            break;
        case 'C':
            cout << "indeks nilai : 2 " << endl;
            break;
        case 'D':
        	cout << "indeks nilai : 1 " << endl;
        case 'E':
            cout << "indeks nilai : 0 " << endl;
            break;
    }
	return 0;
}

