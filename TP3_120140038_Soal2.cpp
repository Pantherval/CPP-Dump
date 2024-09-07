#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    struct kendaraan{ 
        string merek,warna,tipe;
        int tahun, jml;
        float harga;
    };
    int a, b, n;
    kendaraan mobil;
        cin >> mobil.jml;
    for(a=0;a<mobil.jml;a++){
        cin >> mobil.merek;
        cin.ignore();  
        getline(cin,mobil.tipe);
        cin.ignore();
        cin >> mobil.tahun;
        cin >> mobil.warna;
    n = 2021-mobil.tahun;
    mobil.harga=150;
    if(mobil.tipe=="pick_up"){
        b=1;
    }else if (mobil.tipe=="mini_bus"){
        b=2;
    }else if(mobil.tipe=="sedan"){
        b=3;
    }
    mobil.harga=mobil.harga*(0.9^n);

    mobil.harga=mobil.harga*b;
    cout << "Merek mobil : " <<mobil.merek<<endl;
    cout << "Tipe mobil : "<< mobil.tipe <<endl;
    cout << "Tahun terbit : "<<mobil.tahun<<endl;
    cout << "Warna : "<<mobil.warna<<endl;
    cout << "Harga : "<<mobil.harga<<endl;
    
}
    return 0;
}

