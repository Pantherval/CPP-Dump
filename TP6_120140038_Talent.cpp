#include <iostream>
using namespace std;
float avg(float a, int n)
{
	return a / (n*n);
}
int main(){
	
	int n, x, y;
	float jumlah = 0, rata2;
	
	cin >> n;
	
	float talent[n][n];	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> talent[i][j];
			jumlah+= talent[i][j];
		}
	}
	cin >> x >> y;
	
	rata2 = avg(jumlah, n);
	
	cout << "\nTalent :" << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << talent[i][j] << " ";
		}
		cout<< endl;
	}
	
	cout << "\nRata-Rata : " << rata2 << endl;
	
	if(talent[x][y] > rata2){
		cout << "Hasil : Lolos";
	} else {
		cout << "Hasil : Tidak Lolos";
	}
	
    return 0;
	
}
