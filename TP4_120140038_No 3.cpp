#include <iostream>
#include <cstdio>
#include <cstdlib>

int main()
{

char kata[20];
int x=0;

	cout<< " Masukkan kata : " ; gets (kata) ; 
	cout<< " \n" ; 
		while (kata[x]!='\0') { 
			cout<<( int (kata[x] ) ; x++; 
		} 
	cout<<"\n\n"; 
	for (x=0; x<=20;x++) { 
	cout<< hex<< (int (kata[x])) ; x++; 
		} 
	cout<<"\n\n"; 
	system("pause"); 
}
