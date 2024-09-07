//Adi Sulaksono_120140038_Soal 1

#include <iostream>
#include <string>

int deret(int a){
    if(a > 0){
        return a + deret(a-1);
    }else{
        return 0;
    }
}

int pangkat(int a, int b){
    if(b > 0){
        return a * pangkat(a, (b-1));
    }else{
        return 1;
    }
}

using namespace std;
int main(){

    string cek;
    int a, b, n;

    cin >> n;
    int hasil[n];

    for(int i = 0; i < n; i++){
        cin >> cek;
        if(cek == "deret"){
            cin >> a;
            hasil[i] = deret(a);
        }else if(cek == "pangkat"){
            cin >> a >> b;
            hasil[i] = pangkat(a,b);
        }
    }

    for(int i = 0; i < n; i++){
        cout << hasil[i] << endl;
    }

    return 0;
}
