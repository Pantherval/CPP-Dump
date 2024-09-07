#include <iostream>
using namespace std;
///
int main(){
    int i, j,k, X, hasil[3][2], MHasil[3][4], jumlah=0;
   
    //matriks pertama
	int nilai[3][3] = {  {9,8,7},
                         {7,6,8},
                         {8,2,3}  };
	cout<<"Cetak Matriks-1"<<endl;					 
	for(i=0; i<3; i++){ //pengaksesan nilai baris
        for(j=0; j<3; j++){ //pengaksesan nilai kolom
            cout << nilai[i][j] << " ";
        }
        cout << "\n";  
    }			
    
    //matriks kedua
	cout<<endl;
     int nilai2[3][2] = {{7,5},
                         {6,4},
                         {1,2}};             
	cout<<"Cetak Matriks-2"<<endl;					 
	for(i=0; i<3; i++){ //pengaksesan nilai baris
        for(j=0; j<2; j++){ //pengaksesan nilai kolom
            cout << nilai2[i][j] << " ";
        }
        cout << "\n";  
    }		

    for(i = 0; i < 3; i++){
      for(j = 0; j < 2; j++){
        for(k = 0; k < 3; k++){
          jumlah += nilai[i][k] * nilai2[k][j];//9*7 + 8*6 + 7*1
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < 3; i++){
      for(j = 0; j < 2; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
  return 0;    
}

/*
#include <iostream>
using namespace std;

int main() {
	const float Pi = 3.14;
    float luas1, r, d, total;
    
    cout << "Program menghitung luas arsiran lingkaran \n";
    cout << "masukkan panjang jari-jari lingkaran:";
    cin  >> r; luas1 = Pi * r * r;
    cout << "masukkan diagonal belah ketupat:";
    cin  >> d; total = luas1 - (0.5 * d * d);
    cout << "luas arsiran lingkaran adalah:";
    cout << total << endl;
    return 0;
}
*/