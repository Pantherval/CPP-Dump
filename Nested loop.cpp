#include <iostream>
using namespace std;


int main(){
int i, j, k,n;

    cout << "masukkan tinggi = "; 
	cin >> n; 
	cout<<endl;

    for (i = 1; i <=n; i++){

          for (j = 0; j <(n - i); j++)
                cout <<" ";
          for (j = 1; j <= i; j++)
                cout <<"*";
          for (k = 1; k < i; k++)
                cout <<"*";
         cout <<"\n";

    }
}
