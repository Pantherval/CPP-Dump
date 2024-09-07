#include<iostream>
using namespace std;

int linecount(int arr[], int n, int x){
    int i,a;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            a++;
        }
    }
    return a;
};

int main(){
    int arr[100];
    int target,j;
    int n = sizeof(arr)/sizeof(arr[0]);
    do{
    for(j=0;j<100;j++)
    	cin>>arr[j];
	}while(arr[j]!=-999);	
	cin>>target;
    int result = linecount(arr, n, target);
    (result == -1)?cout << "Bilangan "<<target<<" tidak ditemukan" : cout << "Bilangan "<< target <<" ditemukan sebanyak"<< result <<" kali"<<result;
    return 0;
}
