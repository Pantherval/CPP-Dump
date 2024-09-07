#include <iostream>
using namespace std;

bool IsGenap (int x);
int main(){
    int i,sum1,sum2;

    sum1=0;sum2=0;
    for(i=0;i<=10;i++){
    	if (IsGenap(i)){ //IsGenap(i) sama seperti (i%2==0) kalau tanpa bool
    		sum1=sum1+i; //0+2+4+6+8+10= 30
	}else{
			sum2=sum2+i; //0+1+3+5+7+9 = 25
	}
}
cout<<sum1<<endl;
cout<<sum2<<endl;
return 0;

}
bool IsGenap(int x){
	return(x%2==0);
}
