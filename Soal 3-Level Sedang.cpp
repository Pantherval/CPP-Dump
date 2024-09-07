#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
int MAX_ELEM = 10, ARR_LENGTH = 30;
int A[ARR_LENGTH] ; // A adalah sebuah random array
int B[MAX_ELEM] = {}; // array untuk menampung jumlah kemunculan
						// elemen dalam array A

/* kode berikut dieksekusi untuk mengisi array dengan bilangan acak */
srand (time (0)) ; // set random seed untuk pengacakan tiap kali eksekuti
for (int i=0; i < ARR_LENGTH; i++) {
A[i] = (rand () % MAX_ELEM) ; // nilai elemen berkisar 0 sampai
}
// mencari kemunculan setiap elemen dalam array
int angka=0;
for (int i=0; i < MAX_ELEM; i++) {
angka = i;
B[angka] ++;
}
/* jelajahi setiap elemen array B untuk mencarl elemen dengan
jumlah kemunculan tidak lebin banyak dari max_count*/
int max_count = 2;
for (int i=0; i < MAX_ELEM; i++){
if (B[i] <= max_count) cout << B[i] < "\t";	
	}
	return 0;
}

