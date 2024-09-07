#include <iostream>
using namespace std;

int main() {
    string jenis, kondisi;
    int total, kompensasi, lama;
    
    cout << "Jenis kendaraan?" << endl;
    cin >> jenis;
    
    if (jenis == "mobil") {
        total = 3000;
    } else {
        if (jenis == "motor") {
            total = 2000;
        } else {
            total = 0;
        }
    }
    cout << "Lama parkir?" << endl;
    cin >> lama;
    total = total * lama;
    cout << "Apakah kendaraan rusak?(Y/N)" << endl;
    cin >> kondisi;
    if (kondisi == "Y" || kondisi == "y") {
        kompensasi = total * 100;
    } else {
        kompensasi = 0;
    }
    cout << "Apakah tiket hilang?(Y/N)" << endl;
    cin >> kondisi;
    if (kondisi == "Y" || kondisi == "y") {
        total = total + 250000;
    }
    cout << "Apakah membawa STNK?(Y/N)" << endl;
    cin >> kondisi;
    if (kondisi == "Y" || kondisi == "y") {
    } else {
        total = total + 1000000;
    }
    cout << "Total pembayaran : " << total << endl;
    cout << "Jumlah kompensasi : " << kompensasi << endl;
    return 0;
}

