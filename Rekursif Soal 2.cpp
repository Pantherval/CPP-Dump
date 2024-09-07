#include <iostream>
using namespace::std;

int exp(int a, int b){
    if(b==1)
        return a;
    else
        return a*exp(a,(b-1));
}


int main(){
    int a,b;
    
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    
    cout<<"Hasil "<<a<<" pangkat "<<b<<" adalah : "<<exp(a,b);
    cout<<endl;
}
