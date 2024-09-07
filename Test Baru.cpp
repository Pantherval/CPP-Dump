#include<iostream>
#include<string.h>
#include<string>
using namespace std;

class Karyawan{
    public :
    string nama = "Lanang Al Mansyuri";
    string jabatan = "Manager";
    int gaji = 50000000;
    int tgl_libur = 2;
    
};

int main(){
    Karyawan pegawai;
    
    cout<<"Nama : "<<pegawai.nama<<endl;
    cout<<"Nama panggilan : "<<str.front(pegawai.nama)<<endl;
    cout<<"Jabatan : "<<pegawai.jabatan<<endl;
    cout<<"Gaji : "<<pegawai.gaji<<endl;
    cout<<"tgl_libur : "<<pegawai.tgl_libur<<endl;
}