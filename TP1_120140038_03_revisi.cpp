//Adi Sulaksono_120140038
#include <iostream>
using namespace std;

int main(){
    int n,uang=0;
    string peserta[n];
    
    cin >> n;
    for(int i=0;i<n;i++){
    	cin  >> peserta[i];
    	}for(int i=0;i<n;i++){
    		for(int j=i+1;j<n;j++){
			cout << peserta[i] << "-" << peserta[j] << endl;  
			uang++;
		}
	}
		cout << "USD " << uang*3 <<endl;
		
		return 0;
}

