#include <iostream>
using namespace std;

struct mhs{
	string nama,nim;
	char gender;
	int nilai;
};
string gender(char n){
	if(n=='L')
		return "Laki-laki";
	else if(n=='P')
		return "Perempuan";		
}
string nilai(int n){
	if(n>=81 && n<=100)
		return "Sangat baik dan Lulus";
	else if(n>=61 && n<81)
		return "Baik dan Lulus";
	else if(n>=41 && n<61)
		return "Kurang baik dan Lulus (dapat mengulang)";
	else if(n>=0 && n<41)
		return "Buruk dan Mengulang";
}
int main(){
	int n;
	string nim;
	cin>>n;
	
	mhs data[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>data[i].nama;
		cin>>data[i].nim;
		cin>>data[i].gender;
		cin>>data[i].nilai;
	}
	cin>>nim;
	for(int i=0;i<n;i++){
		if(nim==data[i].nim){
			cout<<"Nama\t\t :"<<data[i].nama<<endl;
			cout<<"Jenis Kelamin:"<<gender(data[i].gender)<<endl;
			cout<<"Keterangan\t :"<<nilai(data[i].nilai)<<endl;
			break;
		}else if(i=n-1)
			cout<<"Data mahasiswa tidak ditemukan";
	}
}
