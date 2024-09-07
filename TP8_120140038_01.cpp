//Adi Sulaksono_120140038
#include <iostream>
using namespace std;

void ubah(int *b, int *c){
  int tmp;
  tmp=*b;
  *b = *c;
  *c = tmp;
}

int main(){
	int n;
	cin>>n;
    int a[n];
    for(int h=n-1;h>=0;h--){
        cin>>a[h];
    }
    
    for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(a[i]>a[j]){
                ubah(&a[j], &a[i]);
            }
        }
    }
        for(int k=0;k<n;k++){
            cout<<a[k]<<" ";
        }
}
