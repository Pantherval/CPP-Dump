/*++b increases b by 1 then returns the new value of b 
b++ increases b by 1 then returns the old value of b*/

#include <iostream>
using namespace std;

int main() {
	int B;
    int A;	
    int C;
	cin>> B;
	
	if (B%2 !=0) {
		cout<<"satu: ";
		C=B++; // ini adalah (post) melakukan increment C=B; B=B++
		A=++B; // ini adalah (pre) melakukan B=B+1; A+B
		cout<<A<<endl;
		cout<<B<<endl;
		cout<<C<<endl;
	}
	if (B>10){
		cout<<"dua: ";
		B--;
		cout<<B<<endl; 
	}else {
		cout<<"tiga: ";
		B=B+2;
		if (B<=7){
			B=8;
		}else if (B>8){
			B=B-3;
		}else{
			B++;
		}
		cout<<B<<endl;
	}
	
	return 0;
}
