#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	
	do{
		cout<<"Masukan nilai a = ";
		cin>>a;
		cout<<"Masukan nilai b = ";
		cin>>b;
		cout<<"Masukan nilai c = ";
		cin>>c;
		
	}while(a==b || a==c || b==c);
	return 0;
}
