//Adi Sulaksono_120140038
#include <iostream>
#include <string>
using namespace std;

void enkripsi(string kalimat){
    int a = kalimat.length();

    if(a % 2 == 0){
        for(int i = 0; i < a; i++){
            char sementara;
            if(i % 2 == 0){
                sementara = kalimat[i];
                kalimat[i] = kalimat[a-(1+i)];
                kalimat[a-(1+i)] = sementara;
            }
            if(i+1 == a/2){
                break;
            }
        }
    }
    
    cout << kalimat << endl;
}

int main(){
    
    string pesan;

    getline(cin, pesan);

    enkripsi(pesan);

    return 0;
}//Maaf bang yang nomor 3 saya copas karena tidak dapat logikanya
