#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int A[4][5],B[4][5],C[4][5],ApB[4][5],Hasil[4][5];
	cout << "INPUT MATRIKS A :" << endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<5; j++){
		    cin >> A[i][j];
		}	
	}
	cout << "INPUT MATRIKS B : " << endl;
	for(int i=0; i<4; i++){
		for (int j=0; j<5; j++){
		    cin >> B[i][j];
		}	
	}
	cout << "INPUT MATRIKS C : " << endl;
	for (int i=0;i<4;i++){
		for (int j=0;j<5;j++){
		    cin >> C[i][j];
		}	
	}
    cout << "==========================================" <<endl;
	cout << "Pekalian matriks A dengan matriks B : " << endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			ApB[i][j]=A[i][j]*B[i][j];
			cout<<" "<<ApB[i][j]<<"\t";
		}
		cout<<endl;
	}	
	cout << "==========================================" <<endl;
	cout << "Penjumlahan Matriks A*B dan Matriks C : " << endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			Hasil[i][j]=A[i][j]+B[i][j];
			cout <<" "<<Hasil[i][j]<<"\t";
		}
		cout << endl;
	}
	return 0;
}
