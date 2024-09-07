#include <iostream>
using namespace std;

int main(){
    int N,i,f;
    
    N=5;
    f=1;
    i=1;
    while(i<=N){
    	f=f*i;
    	i=i+1;
	}//i>N
	cout<<f<<endl;
	return 0;
}

