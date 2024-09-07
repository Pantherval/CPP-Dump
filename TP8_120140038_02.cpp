
//Adi Sulaksono_120140038
#include<iostream>
using namespace std;

void tukarharga(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void tukarnama_kos(string *a, string *b){
	string temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int n;
	cin >> n;
	int harga[n];
	string nama_kos[n];	
		
	for (int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, nama_kos[i]);
		cin >> harga[i];
		
		}

	
	for (int i = 0; i < n; i++){
		for (int j = n-1; j > i; j--){
			if (harga[j] < harga[j-1]){
			tukarharga(&harga[j-1], &harga[j]);
			tukarnama_kos(&nama_kos[j-1], &nama_kos[j]);
			}
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++){
		cout << nama_kos[i] << endl;
	
	}
	cout << "Juki akan ngekos di " << nama_kos[0];


	return 0;
}
