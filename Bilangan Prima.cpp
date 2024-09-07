//Viarju Ramanda_120130057
#include <iostream>
using namespace std;

int main() {
    int i=0, cek, bil, n, x, j;
    
    cout << "Masukkan bilangan awal (x) : ";
    cin >> x;
    cout << "Masukkan bilangan akhir (n) : ";
    cin >> n;
    int hasil[n];
    
    bil = x;
    while (bil <= n) {
        cek = 0;
        for (j = 2; j <= bil; j++) {
            if (bil % j == 0) {
                cek = cek + 1;
            }
        }
        if (cek == 1) {
            hasil[i] = bil;
            i = i + 1;
        }
        bil = bil + 1;
    }
    for (j = 0; j <= i - 1; j++) {
        cout << hasil[j];
        if (j < i - 1) {
            cout << ", ";
        } else {
            cout << ". " << endl;
        }
    }
    return 0;
}
