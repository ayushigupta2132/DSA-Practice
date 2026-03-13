//xor the numbers till left to right(range)
//brute force me you can use a for loop(easiest)
#include<iostream>
#include<vector>
using namespace std;
int xor_func(int n){
    if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else if(n%4==3) return 0;
    else return n;
}
int main(){
    int left,right;
    cin>>left>>right;
    int ans=xor_func(left-1) ^ xor_func(right);
    cout<<ans;
    return 0;
}
//tc=0(1)
//sc=0(1)