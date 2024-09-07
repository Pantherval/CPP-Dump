//NIM/Nama : 120140038/Adi Sulaksono
//Nama file : TP4_120140038_bidding.cpp
//Tanggal : 28 November 2020
//Deskripsi: Bidding asik

#include <iostream>
using namespace std;

int main(){
    int i,max=0;
    int bid[5];
    
	for(i=1;i<=5;i++){
    	cout<<"Bidding ke-"<<i<<"= ";
    	cin>>bid[i];
}
	if(bid[i]>0 && bid[i]<100){	
		if(bid[i]>max){
    		max=bid[i];	
			cout<<endl<<"The winner :  "<<max;
		}
	}else if(bid[i]<0 || bid[i]>100){
		cout<<endl<<"Error";
	}

	return 0;
}
