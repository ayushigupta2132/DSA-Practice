//using xor
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr^arr[i];
    }
    //2^2=0
    //0^2=2
    cout<<xorr;
    return 0;
}
//optimal
//tc=0(n)
//sc=0(1)