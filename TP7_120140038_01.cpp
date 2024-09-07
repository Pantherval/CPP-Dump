#include<iostream>
using namespace std;

int linecount(int arr[], int j, int x){
    int i,a;
    for(i=0;i<j;i++){
        if(arr[i]==x){
            a++;
        }
    }
    return a;
};

int main(){
    int arr[100];
    int target,j;
    
    for(j=0;j<100;j++){
    	cin>>arr[j];
    	if(arr[j]==-999){
        	break;
    }
    }	
	cin>>target;
    int result = linecount(arr, j, target);
    (result == 0)?cout << "Bilangan "<<target<<" tidak ditemukan" : cout << "Bilangan "<< target <<" ditemukan sebanyak "<< result <<" kali";
    return 0;
}
