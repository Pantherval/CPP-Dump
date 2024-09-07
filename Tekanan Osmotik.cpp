//Viarju Ramanda_120130057
#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    
    cout << "Masukkan banyak tekanan osmotik yang ingin dicari : ";
    cin >> n;
    double r;
    int m[n], t[n], phi[n];
    
    r = 0.082;
    for (i = 0; i <= n - 1; i++) {
        cout << "Masukkan molaritas zat ke-" << i + 1 << " : ";
        cin >> m[i];
        cout << "Masukkan suhu dalam satuan (K) ke-" << i + 1 << " : ";
        cin >> t[i];
        if (m[i] == 0) {
            cout << "Data ke-" << i + 1 << " tidak terdefinisi" << endl;
            phi[i] = 0;
        } else {
            phi[i] = m[i] * r * t[i];
        }
    }
    for (j = 0; j <= n - 1; j++) {
        cout << "Hasil tekanan osmotik ke-" << j + 1 << " : " << phi[j] << endl;
    }
    return 0;
}
