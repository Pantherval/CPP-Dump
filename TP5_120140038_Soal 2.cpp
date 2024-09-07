//Adi Sulaksono_120140038_Soal 2
#include <iostream>
using namespace std;

struct Mahasiswa {
		int nim;
		string nama;
		float nilai;
	};

int main () {
	
	int n;
	float sum=0,rerata;
	
	cin >> n;
	
	Mahasiswa student[n];
	
	for (int i=0; i<n; i++) {
		cin >> student[i].nama;
		cin >> student[i].nim;
		cin.ignore(1, '\n');
		cin >> student[i].nilai;
		sum=sum+student[i].nilai;
		rerata=sum/n;
	}
	cout << "Nilai rata-rata : "<<rerata<<endl;
	cout << "Data mahasiswa yang lulus : " << endl;
	
	for (int i=0; i<n; i++) {
		if (student[i].nilai >= rerata ) {
			cout << "Nama : " << student[i].nama << endl;
			cout << "NIM : " << student[i].nim << endl;
			cout << endl;
		}
	}
	return 0;
}
