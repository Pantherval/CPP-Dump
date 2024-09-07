//Adi Sulaksono_120140038
#include <iostream>
using namespace std;

void ubah(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


void ubahdua(string &a,string &b){
	string tmp;
	tmp=a;
	a=b;
	b=tmp;
}

void ubahtiga(float *a,float *b){
	float temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int n;
	cin>>n;
	string a[n];
	int b[n], point=0, d;
	float c[n];
	
	for (int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> b[i];
        cin >> c[i];
    }
    
    for(int i=0; i < n; i++) {
        for(int j=n-1; j > i; j--){
            if(c[j] > c[j-1]){
                ubah(&b[j-1], &b[j]);
                ubahdua(a[j-1], a[j]);
                ubahtiga(&c[j-1],&c[j]);
            }
        }
    }
    
    cin>>d;
    for(int i=n-1; i >=0; i--){
        if(b[i]==d){
        	point=i;
        }
    }
    cout<<a[point]<<endl<<point+1<<endl;
}
