#include <iostream>
using namespace std;

void matriks1(float matriks[2][2]){
  for (int i=0; i<2; i++) {
    for (int j=0; j<2; j++) {
      if (j != 1) {
        cout << matriks[i][j] << " ";
      }else{
        cout << matriks[i][j] << endl << endl;
      }
    }
  }
}
int main() {
  float matriks[2][2];

  cout << "Masukkan Nilai :" << endl;
  for (int i=0; i<2; i++) {
    for (int j=0; j<2; j++) {
      printf("Matriks [%d][%d] = ", i, j);
      cin >> matriks[i][j];
  }
}
  cout << "Matriks Biasa :" << endl;
  matriks1(matriks);

  cout << "Matriks Invers :" << endl;
  float a = matriks[0][0];
  float b = matriks[0][1];
  float c = matriks[1][0];
  float d = matriks[1][1];
    if ((a*d)-(b*c) != 0) {
      matriks[0][0] = d;
      matriks[0][1] = -b;
      matriks[1][0] = -c;
      matriks[1][1] = a;
      for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
          matriks[i][j] /= ((a*d)-(b*c));
        }
      }
      matriks1(matriks);
    }else{
      cout << "Tidak memenuhi syarat matriks invers" << endl;
    }

return 0;
}

/*
2
3
1
4

2  3
1  4

0.8  -0.6
-0.2  0.4
*/