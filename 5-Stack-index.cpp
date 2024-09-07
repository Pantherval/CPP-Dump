#include <iostream>
using namespace std;
int N=10;
int data[10], i=-1;

bool Kosong(){
	return (i == -1);
}
bool Penuh(){
	return (i == N-1);
}
void push(int a){
	if(!Penuh()){
		i++;
		data[i]=a;
	}
	else{
		cout<<"Nggak muat, bro!"<<endl;
	}
}
void pop(){
	if(!Kosong()){
		cout<<data[i]<<endl;
		i--;
	}
	else{
		cout<<"Dah kosong dah~"<<endl;
	}
}
	
int main(){
	push(1);
    push(2);
    push(3);
    push(4);

    pop();
    pop();
    pop();
    pop();
    pop();
	
	return 0;
}
