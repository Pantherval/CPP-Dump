#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    struct handphone{ 
        string jenis,tipe;
        int ram, storage, kamera, baterai;
    };
    handphone hp;
        cin >> hp.jenis;
        cin.ignore();  
        getline(cin,hp.tipe);
        cin >> hp.ram;
        cin >> hp.storage;
        cin >> hp.kamera;
        cin >> hp.baterai;
    
        cout << "Handphone terbaru "<<hp.jenis<< hp.tipe <<", dengan spesifikasi Ram "<<hp.ram<<" Gb, Storage "<<hp.storage<<" Gb, kamera "<< hp.kamera<<" Mp, dan batrai "<<hp.baterai<<" Mah";
    return 0;
}

