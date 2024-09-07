//Adi Sulaksono_120140038
#include <iostream>
using namespace std;

int terpilih(int a){
	int max=0;
	if(a>max){    
    		max = a;  
		}
	return max;
}
float rerata(int a,int n){
	int jml=0;
	jml = (jml + a)/n;
	return jml;
}
int main(){
    int a, b, i, n;
    int umur[n];
	
	cout << "Inputkan jumlah pemuda yang akan dipilih";
	cin  >> n;
	for(i=0;i<n;i++){
    	cout << "umur pemuda ke "<< i+1 <<" =";
    	cin  >> umur[i];
	}
	a = terpilih(umur[i]);
	b = rerata(umur[i],n);
	
	cout << "Ketua terpilih "<< a << endl;
	cout << "Rata-rata umur "<< b << endl;
}
