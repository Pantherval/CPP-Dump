#include <iostream>
using namespace std;

int main() {
    int tugas, quiz, uts, uas;
    string nama;
    float total;
    
    cout << "Inputkan nama Mahasiswa" << endl;
    cin >> nama;
    cout << "Inputkan nilai tugas Mahasiswa" << endl;
    cin >> tugas;
    cout << "Inputkan nilai quiz Mahasiswa" << endl;
    cin >> quiz;
    cout << "Inputkan nilai UTS Mahasiswa" << endl;
    cin >> uts;
    cout << "Inputkan nilai UAS Mahasiswa" << endl;
    cin >> uas;
    total = tugas * 0.15 + quiz * 0.25 + uts * 0.3 + uas * 0.3;
    cout << "Mahasiswa bernama " << nama << " mendapatkan nilai " << total << endl;
    return 0;
}
