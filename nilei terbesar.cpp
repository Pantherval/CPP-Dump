#include <iostream>
using namespace std;

int main() {
	int a, b;
	
    cout << "masukkan nilai a : "; 
	cin >> a;
    cout << "masukkan nilai b : "; 
	cin >> b;
    
    if ( a > b ){
        cout << "nilai terbesar   : " << a << endl;
    }else if( b > a ){
        cout << "nilai terbesar   : " << b << endl;
	}
	return 0;   
        
}
