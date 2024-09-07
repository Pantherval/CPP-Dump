/* Karakteristik Array
jumlah maksimal array harus sudah di tentukan dari awal
Setiap elemen array dapat diakses dgn menyebutkan indeksnya
array hanya bisa mengurutkan data yang sama

cara kerjanya int nilai[10]
maka saat input indeksnya hanya nilai [0] sampai nilai [9]
*/

#include <iostream>
using namespace std;

int main(){
    
    int tinggi[5];

    tinggi[0] = 102;
    tinggi[1] = 124;
    tinggi[2] = 133;
    tinggi[3] = 111;
    tinggi[4] = 104;

   
        cout<<tinggi[0]<<endl;
		cout<<tinggi[1]<<endl;
		cout<<tinggi[2]<<endl;
    	cout<<tinggi[3]<<endl;
    	cout<<tinggi[4]<<endl;
    	cout<<tinggi[0+1+2+3+4]/5<<endl;
	

    return 0;
}
