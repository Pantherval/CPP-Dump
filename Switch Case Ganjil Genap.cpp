#include<iostream>
#include<math.h>
using namespace std;

int main () {
	int n[8];
	int t, ganjil = 0, genap = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> n[i];
		t = n[i] % 2;
		switch (t)
		{
		case 0:
			genap += 1;
			break;
		case 1:
			ganjil += 1;
			break;
		default:
			break;
		}
	}
	cout << "Bilangan genap : " << genap << endl;
	cout << "Bilangan ganjil : " << ganjil;
	
}
