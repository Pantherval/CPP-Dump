#include <iostream>
using namespace std;

int cari_deh(int x, int y) {
    if(( y<=x) && (x % y ==0)) {
      return y;
      }else if (x<y) {
        return cari_deh(y, x);
      }else {
        return cari_deh(y, x % y);
}
}
	
int main() {
   int hasil = cari_deh(25, 13) ;
   cout<<"Hasilnya adalah "<<hasil<<endl;
   return 0;
}
