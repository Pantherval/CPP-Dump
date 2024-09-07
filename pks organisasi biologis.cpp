#include <iostream>
using namespace std;

int main(){
	
	cout<<"ORNANISASI BIOLOGIS";
	cout<<endl;
	
	int pilih;//deklarasi untuk input tingkatan yang akan dipilih
	char ulang;//deklarasi untuk melakukan perulangan dengan while
	do{
		
		string Tingkatan[11]={"Molekul","Organel","Sel","Jaringan","Organ","Sistem Organ","Organisme","Populasi","Komunitas","Ekosistem","Biosphere"};//deklarasi array sekaligus mengisi data array
			for(int i=0; i<11; i++){
			cout<<"Tingkatan["<<i+1<<"]="<<Tingkatan[i]<<endl;//tingkatan 0 sampai 10 digunakan untuk menampilkan data dalam array yang sebelumnya di deklarasikan
		}
			cout<<"Pilih salah satu (1-11)= ";//digunakan untuk menampilkan pertanyaan tingkatan berapakah yang akan dipilih
			cin>>pilih;//inputan yang akan digunakan untuk dicek pada switch case
			
			switch(pilih){//percabangan switch case digunakan untuk mengecek hanya satu angka yang tadi diinputkan jika sesuai maka akan tampil sesuai casenya
				case 1 :
					cout<<"Molekul adalah partikel penyusun organisme yang terdiri dari dua atom atau lebih\n";
				break;
				case 2 :
					cout<<"Suatu struktur yang dibatasi membran dengan fungsi khusus didalam suatu sel\n";
				break;	
				case 3 :
					cout<<"Sel adalah struktur fungsional yang paling kecil dalam suatu organisme\n";
				break;
				case 4 :
					cout<<"Jaringan adalah sekumpulan sel yang memiliki fungsi tertentu dalam tubuh makhluk hidup\n";
				break;
				case 5 :
					cout<<"Organ adalah sekumpulan jaringan yang memegang fungsi tertentu dalam tubuh makhluk hidup\n";
				break;
				case 6 :
					cout<<"Sistem organ adalah sekumpulan organ tertentu yang akan membentuk sistem organ\n";
				break;
				case 7	:
					cout<<"Sistem organ kemudian akan bekerja sama dan menyusun tubuh organisme. ";
					cout<<"Organisme adalah individu ataupun spesies yang dapat diidentifikasi\n";
				break;
				case 8 :
					cout<<"Populasi adalah sekumpulan individu dari satu spesies yang hidup dan berinteraksi di wilayah tertentu\n";
				break;
				case 9 :
					cout<<"Komunitas adalah sekumpulan populasi makhluk hidup dari berbagai spesies yang hidup dan berinteraksi di suatu wilayah tertentu\n";
				break;
				case 10 :
					cout<<"Ekosistem adalah sekumpulan faktor biotik (unsur hidup) dan abiotik (unsur tidak hidup) yang hidup saling berdampingan\n";
				break;
				case 11 :
					cout<<"Seluruh lingkungan di Bumi yang mendukung kehidupan\n";
				default :
					cout<<"Data hanya 1-11\n";//digunakan jika yang diinputkan selain 1-11
				break;
				cout<<endl;
			}
			cout<<"Kembali ke Menu Utama? (y/n) = ";//pertanyaan untuk melakukan perulangan while
			cin>>ulang;
		cout<<"\n";
	}
	while (ulang=='y');//jika yang diinputkan adalah y maka while akan melakukan perulangan
	
	return 0;
}
