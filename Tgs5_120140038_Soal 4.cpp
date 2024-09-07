//Adi Sulaksono_120140038
#include<iostream>
using namespace std;

int main(){
   int n;
do{
    cout<<"Masukkan Sebuah Bilangan Bulat : ";
    cin>>n
    
    if(n%2==0){
        cout<<"Merupakan Bilangan Genap\n";
    }else{
        cout<<"Merupakan Bilangan Ganjil\n";
        }
}while(n!=-999);
	return 0;
}
