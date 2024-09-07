#include <iostream>
#include <string.h>
using namespace std;


void EnDe(string shift,int *kunci,string pesan){

	if(shift == "encrypt"){
		for(int i = 0 ; i < pesan.length(); i++){
			if(pesan[i] == ' '){
				
			}else if((pesan[i]+ *kunci)>122){
				pesan[i] = 96+(*kunci-(122-pesan[i]));
			}else{
				pesan[i] = (pesan[i] + *kunci);
			}
			
		}
		cout<<pesan;
			
	}else if(shift == "decrypt"){
		for(int i = 0; i<pesan.length(); i++){
			if(pesan[i] == ' '){
				
			}else if((pesan[i] - *kunci) < 97){
				pesan[i] = 123-(*kunci - (pesan[i] - 97));
			}else{
				pesan[i] = (pesan[i] - *kunci);	
			}
		}
		
		cout<<pesan;
	}else{
		cout<<"Error";
	}
}

int main(){
	string shift,pesan;
	int kunci;
	
	cin>>shift;
	cin.ignore();
	
	cin>>kunci;
	cin.ignore();
		
	kunci%=26;
		
	getline(cin, pesan);
	
	EnDe(shift,&kunci,pesan);
	
	return 0;
}
