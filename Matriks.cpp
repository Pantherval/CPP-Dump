#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n,i,j;
	float x,y,xx[n],yy[n],hasil[n][n];
		cout<< "Masukkan jumlah p : ";
		cin >> n; 
		for(i=1;i<=n;i++){
			cout<<"masukkan nilai p : "<< i<< endl;
		for(j=1;j<=2;j++){
		if(j==1){
			cout<<"masukkan nilai x : ";
			cin >>xx[i];
		}else{
			cout<<"masukkan nilai y : ";
			cin >>yy[i];
		}
	}
}
    for( i= 1; i<=n; i++ ){
     for(j=1; j<=n; j++){
     	x= xx[i] - xx[j];
     	y= yy[i] - yy[j];
     	hasil[i][j]= sqrt(pow(x,2) + pow(y,2));
        cout<< hasil [i][j]<< "\t";
    }
	cout<< endl;
  }
    return 0;
}
