#include <iostream>
using namespace std;

int main() {
    long long int n, i, b, c, pilihan;
    
    cout << "=========={ Fibonacci Calculator }==========" << endl;
    cout << "1.Fibonacci untuk mengetahui nilai suku ke-n" << endl;
    cout << "2.Fibonacci dengan nilai suku diketahui" << endl;
    cout << "Pilih diantara 2 perhitungan fibonacci berikut yang ingin dicari : " << endl;
    cin >> pilihan;
    
	if (pilihan == 1) {
        cout << "Inputkan suku bilangan fibonacci yang ingin diketahui : ";
        cin >> n;
        int a[n];
        
        for (i=0; i<n; i++) {
            if(i==0){
                a[i]=0;
            }else if(i==1){
                a[i]=1;
            }else if(i>=2){
                a[i]=a[i-1] + a[i-2];
            } else {
                cout << "Bilangan tidak dapat kurang dari 0" << endl;
                    }
                }
        for (i=0; i<n; i++){
            cout << "Bilangan fibonacci ke-" << i + 1 << " : " << a[i] << endl;
        }
    }else if(pilihan == 2){
        cout << "Inputkan banyaknya suku yang diketahui nilainya" << endl;
        cin >> n;
        int a[n];
            
        if(n>=2){
            for (i=0; i<n; i++){
                cout << "Inputkan bilangan suku ke-" << i + 1 << " : ";
                cin >> a[i];
                }
                b = a[n - 2] + a[n - 1];
                c = a[n - 1] + b;
                cout << "Bilangan suku ke-" << n + 1 << " adalah : " << b << endl;
                cout << "Bilangan suku ke-" << n + 2 << " adalah : " << c << endl;
        }else{
            cout << "Jumlah suku tidak memenuhi syarat Bilangan Fibonacci (n>=2)" << endl;
    	}
		}else{
            cout << "Inputkan angka 1 atau 2" << endl;
        }
    return 0;
}
