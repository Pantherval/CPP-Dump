//Adi Sulaksono_120140038_Soal 1
#include<iostream>
using namespace std;

int dibalik(int n){
	if(n<0){
		return n;
	}else if(n>=0){
		int s = n % 10; 
 		int p = ((n-s)%100)/10; 
 		int r = (n-((p*10)+s))/100; 
		return ((s*100)+(10*p)+r);
 	}
}

int main(){
	int a,b,c;
	cin>>b;
	cin>>c;
	a=b+c;
	cout<<dibalik(a);
	
}


