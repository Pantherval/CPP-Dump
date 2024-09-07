#include <iostream>
#include <math.h>
using namespace std;

void kuadrat(int *x, int *y){
 *x = pow(*x, *y);
}

int main(){
int a, b;
cin >> a >> b;
kuadrat(&a, &b);
cout << a;
}