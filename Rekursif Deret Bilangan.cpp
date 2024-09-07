#include<iostream>
using namespace std;

int deret(int n){
	if(n<0){
		return n;
	}else if(n>1){
		return (n*deret(n-1));
	}else{
		return 1;
	}
}

int main(){
	int a;
	cin>>a;
	cout<<deret(a);
	
}
