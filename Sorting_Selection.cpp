#include <iostream>
using namespace std;

void ubah(int *b, int *c){
  int tmp;
  tmp=*b;
  *b = *c;
  *c = tmp;
}

int main(){
    int i,h,n=7,a[n]={5,6,8,1,3,25,10};
    int idx_maks;
    for(h=n-1;h>0;h--){
        idx_maks=0;
    for(i=1;i<=h;i++){
            if(a[i]>a[idx_maks]){
                idx_maks=i;
        }
    }
    ubah(&a[i],&a[idx_maks]);
    }
    cout<<endl<<"Setelah pengurutan : ";
        for(int k=0;k<n;k++){
            cout<<a[k]<<" ";
        }
}
