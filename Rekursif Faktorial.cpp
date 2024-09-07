#include<iostream>
using namespace std;

int faktorial(int n){
	if(n<0){
		return -1;
	}else if(n>1){
		return (n*faktorial(n-1));
	}else{
		return 1;
	}
}

int main(){
	int a;
	cin>>a;
	cout<<faktorial(a);
	
}
