#include <iostream>
using namespace std;

/*Toko Buku Wijaya/*/
int main() {
	int price,	QT;
	
    cout << "masukkan harga buku : "; 
	cin >> price;
    cout << "masukkan quantity pembelian : "; 
	cin >> QT;
    
    if ( QT < 20 ){
        cout << "total harga : " <<(price* QT) << endl;
    }else if( QT > 100 ){
        cout << "total harga : " <<(price* QT) - (price* QT * 20/100) << endl;
	}else if ( 20<=QT<=100 ){
        cout << "total harga : " <<(price* QT) - (price* QT * 10/100)<< endl;
	}
	return 0;   
        
}
