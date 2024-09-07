//Adi Sulaksono_120140038
#include <iostream>
using namespace std;

int main(){
    int i,jml=0,max=0,n;
    int umur[n];
	float rata;
    
    cin >> n;
	for(i=0;i<n;i++){
    	cout << "umur pemuda ke "<< i+1 <<" =";
    	cin  >> umur[i];
    	jml = jml + umur[i];
    	if(umur[i]>max){    
    		max = umur[i];  
		}
	}
	rata=jml/n;
		cout << "Ketua terpilih "<< max << endl;
		cout << "Rata-rata umur "<< rata << endl;
	return 0;
}
