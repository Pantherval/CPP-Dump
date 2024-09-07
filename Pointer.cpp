#include <iostream>
using namespace std;

void coba_lagi(int* x,int* y, int z){
    *x = z;
    *y = *x;
}

void coba_dulu(int* x, int *y){
    int z = *x;
    *x = *x + *y;
    coba_lagi(x,y,z);
}
int main(){
    int a=1,b=1;
    for(int i=0;i<5;i++){
        coba_dulu(&a, &b);
    }
    cout<<a<<" "<<b;
    return 0;
}

