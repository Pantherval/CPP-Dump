#include <iostream>
using namespace std;

int main(){
    int i,jml=0,max=0;
    int tinggi[5];
	float rata;
    
	for(i=0;i<5;i++){
    	cout << "data anak ke-"<< i+1 <<"=";
    	cin  >> tinggi[i];
    	jml = jml + tinggi[i];
    	if(tinggi[i]>max){     
    		max = tinggi[i];  
		}
	}
	rata=jml/5;
		cout << "Rata-rata tinggi badan = "<< rata << endl;
		cout << "Tinggi maksimum "<< max << endl;
	return 0;
}
