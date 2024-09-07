//NIM/Nama : 120140038/Adi Sulaksono
//Nama file : TP2_120140038_1.cpp
//Tanggal : 20 November 2020
//Deskripsi: Soal 1 (Lokasi Bom)

#include<iostream>
using namespace std;
int main(){
	int n,m, o;
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            o = i + j;
            if (o % m == 0)
            {
                cout << "X ";
            } else
            {
                cout << "O " ;
            }
            
            
            
        }
        cout << endl;
    }
    return 0;
}
