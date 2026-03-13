//xor the numbers till 1 to given N
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%4==1) cout<<1;
    else if(n%4==2) cout<<n+1;
    else if(n%4==3) cout<<0;
    else cout<<n;
    return 0;
}
//tc=0(1)
//sc=0(1)