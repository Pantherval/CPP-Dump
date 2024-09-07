#include <iostream>
using namespace std;

void Aneh(int a,int b) {
	if (a > b ) {
		cout << a * b;
	} else if ( a < b ) {
		cout << a - b;
	}
}

int main () {
	int x, y;
	cin >> x >> y;
	Aneh(x,y);
	
return 0;
}
