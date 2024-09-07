#include <iostream>
using namespace std;

int main(){
	int x;
	int n,hasil=1;
	
	cout<<"Masukkan x faktorial : ";
   	cin>>x;
	
  for(int i=x ; i>=1 ; i--){
	hasil=hasil*i;
}
   cout<<"Hasil faktorial : "<<hasil;
return 0;
}
