#include <iostream>

using namespace std;

int main(){
    int MT[2][3],M[2][3],MT2[2][3],MTranspose[3][2];
    
    cout<<"Inputkan Matriks Pertama"<<endl;
    for(int i=0; i<3; i++){
    	for(int j=0; j<2; j++){
        	cin>>MT[i][j];
        }
    }
    cout<<"Inputkan Matriks Kedua"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cin>>M[i][j];
            MT2[i][j]=MT[i][j]+M[i][j];
        	MTranspose[j][i]=MT2[i][j];
		}
    }
    cout<<"Hasil Penjumlahan dan Transpose Matriks"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
			cout<<" "<<MTranspose[i][j]<<"\t";
		}
		cout<<endl;
	}
    return 0;
}
