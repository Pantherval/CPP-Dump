#include<iostream>
using namespace std;

int linesearch(int arr[], int n, int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
};

int main(){
    int arr[] = {2,3,4,10,40};
    int target = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = linesearch(arr, n, target);
    (result == -1)?cout << "Nilai yang dicari tidak terdapat pada array" : cout << "Nilai terdapat pada index array ke-"<<result;
    return 0;
}
