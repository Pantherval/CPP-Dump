//NIM/Nama : 120140038/Adi Sulaksono
//Nama file : TP3_120140038_Poin2.cpp
//Tanggal : 27 November 2020
//Deskripsi: Rayquaza

#include<iostream>
using namespace std;

	int main(){
		int i,hp=400;
		int attack[5];
		int rayquaza;
		
			for(i=1;i<=5;i++){
    		cout<<"Serangan ke-"<<i<<"=";
    		cin>>attack[i];
    		hp-=attack[i];
    		
    }
    	rayquaza=hp;
		
		if(rayquaza<0){
    		cout<<"overpower"<<endl;
    	}else if (rayquaza==0){
    		cout<<"win"<<endl;
		}else if (rayquaza>0){
			cout<<"lose"<<endl;
		}
		
		return 0;
	
}
