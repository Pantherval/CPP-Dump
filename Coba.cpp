#include <iostream>
using namespace std;

int main(){
    float n,x,jumlah=0,rerata;
    cin>>n;
    for(int i=0;i<n;i++){//0<=i<=7 i = (0,1,2,...,10)
        cout<<"Data ke-["<<i+1<<"] = ";
        cin>>x;
        jumlah += x;
    }
    rerata = jumlah/n;
    cout<<"Total jumlah semua : "<<jumlah<<endl;
    cout<<"Rata-rata : "<<rerata;
    return 0;
}
