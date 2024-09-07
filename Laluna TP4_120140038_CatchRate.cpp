//NIM/Nama : 120140038/Adi Sulaksono
//Nama file : TP4_120140038_catchrate.cpp
//Tanggal : 28 November 2020
//Deskripsi: Catch Rate

#include<iostream>
using namespace std;

	int main(){
		int i,rate=100;
		int kesempatan[3];
		int lunala;
		
		
			for(i=1;i<=3;i++){
    		cout<<"Kesempatan ke-"<<i<<"= ";
    		cin>>kesempatan[i];
			rate-=kesempatan[i];
    		
    }
    	lunala=rate;
		
		if(lunala<0){
    		cout<<"Error"<<endl;
    	}else if (lunala==0){
    		cout<<"Gotcha! Lunala was caught"<<endl;
		}else if (lunala>0){
			cout<<"Lunala was ran away!"<<endl;
		}
		
		return 0;
	
}
