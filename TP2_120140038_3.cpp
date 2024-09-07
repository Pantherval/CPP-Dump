//NIM/Nama : 120140038/Adi Sulaksono
//Nama file : TP2_120140038_3.cpp
//Tanggal : 20 November 2020
//Deskripsi: Soal 3 (Zeno Paradoxs)

#include<iostream>
using namespace std;
int main()
{
  int jarak;
  float hasil;

  cin >> jarak;

  hasil = jarak;
  for (int i = 0; i <= 10; i++) {
    hasil /=2;
  }

  cout << "gagal finish sisa " << hasil;

  return 0;
}
