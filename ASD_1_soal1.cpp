//link repl.it https://replit.com/join/unquxilvjq-12o14oo38-adisu
#include <iostream>
using namespace std;

int cari(int arr[], int l, int r, int x){
  int m = l + (r - l) / 2;
    if (arr[m] == x)
    	return m;
	if (arr[m] < x)
      	return cari(arr,(l=m + 1),r,x);
    else	
   		return cari(arr,l,(r=m-1),x);
  	
  		return -1;
} 

int main(void){
  int arr[] = { 2, 3, 4, 10, 40 };
  int x = 10; //x adalah bilangan yg dicari (target)
  //n adalah panjang dari array
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = cari(arr, 0, n - 1, x);
  (result == -1) ? cout << x << " tidak ada di array" : cout << x <<" berada pada index ke-" << result;

  return 0;
}
