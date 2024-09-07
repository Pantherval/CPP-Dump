#include <iostream>
#include <math.h>
using namespace std;

int dekat(int *b){
 
 return *b;
	} 
	
int main(){
	struct jarak{
	int x,y;
	};
	int a,point;
	cin  >> a;
	float h[a],min=0;
	jarak n[a];
	
	for(int i=0; i<a; i++){
	cin  >> n[i].x >> n[i].y;
	}
	for(int i=0; i<a; i++){
	h[i] = sqrt(pow((n[i].x-0), 2) + pow((n[i].y-0), 2));
	
	if(h[i]<min){     
    	min = h[i];  
		point = i;
		}
	}
	cout<<dekat(&n[point].x)<<" "<<dekat(&n[point].y);
	cout<<endl;
	return 0;
}
