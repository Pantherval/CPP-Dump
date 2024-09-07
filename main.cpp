#include <iostream>
using namespace std;

void mul(int *x, int *y, int *z){
        *x = *x * 2;
        *y = *y * 2;
        *z = *z * 2;
    
}

int main(){
    int a, b, c;
    
    cin >> a;
    cin >> b;
    cin >> c;
    mul(&a, &b, &c);

    cout << a <<endl;
    cout << b <<endl;
    cout << c <<endl;
}