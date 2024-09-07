#include<iostream>
using namespace std;

int main(){
	int n,i=0;
	float sum=0;
	
	while(i<5){
		cout<<"Input nilai ke-"<<i+1<<" = ";
		cin>>n;
		sum+=n;
		i++;
	}
	sum=sum/5;
	cout<<"Nilai rata-rata = "<<sum;
}
