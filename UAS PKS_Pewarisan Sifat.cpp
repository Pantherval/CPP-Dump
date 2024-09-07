#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int sum1=0, sum2=0;
    string a[2],b[2],c[4];
    
        cout<<"Inputkan individu yang bersifat dominan : "<<endl;
        cin>>a[0]>>b[0];
        cout<<"Inputkan individu yang bersifat resesif : "<<endl;
        cin>>a[1]>>b[1];
        
        c[0]=a[0]+" "+b[0];
        c[1]=a[0]+" "+b[1];
        c[2]=a[0]+" "+b[1];
        c[3]=a[1]+" "+b[1];
    for(int i=0;i<4;i++){    
        if(c[i]==a[0]+" "+b[1] || c[i]==a[1]+" "+b[1]){
            sum1++;
        }else if(c[i]==a[0]+" "+b[0]){
            sum2++;
        }
    }
        cout<<"Hasil persilangan satu sifat berbeda adalah : "<<endl;
        cout<<c[0]<<" Sebanyak : "<<sum1<<" "<<a[1]<<endl;
        cout<<c[3]<<" Sebanyak : "<<sum2<<" "<<a[1]<<endl;
    
    return 0;
}
