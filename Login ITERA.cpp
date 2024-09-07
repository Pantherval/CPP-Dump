#include <iostream>
using namespace std;

int main(){
    string Pass;

    for(int i=1;i<=4;i++){
    	cout << "Masukkan password akun anda"<< endl;
        cin >> Pass;
        if(Pass=="ITERA" || Pass=="itera"){
            cout << "login berhasil"<< endl;
            break;
        }else{
            if(i != 3){
                cout << "login gagal" <<  endl;
            }else{
                cout << "akun anda terkunci" << endl;
                break;
            }
        }
    }
    return 0;
}
