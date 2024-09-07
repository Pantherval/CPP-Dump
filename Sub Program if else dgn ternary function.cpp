#include <iostream>
using namespace std;

int aneh(int a, int b){
    return (a > b) ? a*b : b-a;//Fungsi dari tanda tanya adalah ternary function gunanya mempersingkat if else
}								//dan else berada di setelah titik dua
int main(){
    int a, b;
    cout << "Masukkan bilangan 1 : ";
    cin >> a;
    cout << "Masukkan bilangan 2 : ";
    cin >> b;

    cout << aneh(a, b);
}
