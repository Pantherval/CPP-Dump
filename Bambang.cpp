//Rumus untuk mencari sisi terpanjang segitiga
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Masukkan banyak sisi yang ingin di cek : "
    cin>>n;
    float a[n],b[n],c[n];
    

    for(int i=0;i<n;i++){
        cout<<"Inputkan sisi pertama : ";
		cin>>b[i];
		cout<<"Inputkan sisi kedua : ";
        cin>>c[i];
        a[i]=sqrt(pow((b[i]),2) + pow((c[i]),2));
        if(b[i]==0 || c[i]==0){
            cout<<"Data ke-"<<i<<" tidak terdefinisi"<<endl;
        }
    }
    for(int j=0;j<n;j++){
        cout<<"Hasil sisi terpanjang segitiga ke-"<<j+1<<" : "<<a[j]<<endl;
    }
    

    return 0;
}

