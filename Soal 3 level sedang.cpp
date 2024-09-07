#include<iostream>
using namespace std;

char Hmm(int z){
	char B[10]={'L','O','R','E','M','I','P','S','U','W'};
	return B[z];
};

int main(){
	int A[10]={0,0,0,0,0,0,0,0,0,0};
	int i,x;
	
	for(i=0;i<20;i++){
		cin >> x;
		A[x]++;
	}
	for(i=0;i<10;i++){
		cout << i << "="<<A[i]<<"-->"<<Hmm(A[i]);
		cout<< endl;
	}
}
