#include <iostream>

using namespace std;
int FPB(int m,int n){
	if(m==0) return n;
	else if(m<n) return FPB(n,m);
	else return FPB(m%n,n);
}
	
int main(){
    int a, b;
    cout <<"Masukan Angka Pertama : ";
    cin >> a;
	cout <<"Masukan Angka Kedua : ";
    cin >> b;
    
    cout <<"FPB-nya adalah "<< FPB(a,b);
 
    return 0;
}
