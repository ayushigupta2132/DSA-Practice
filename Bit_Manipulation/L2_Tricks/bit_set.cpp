//check if ith bit is set or not

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string decimaltobinary(int n){
    if(n == 0) return "0";
    string res="";
    while(n>0){
        if(n%2==1) res+='1';
        else res+='0';
        n=n/2;
    }
    reverse(res.begin(),res.end());
    return res;
}
bool bit_set(int n,int i){
    string bin=decimaltobinary(n);
    int len=bin.length();
    if(i>=len) return false;
    if(bin[len-1-i]=='1') return true;
    else return false;
}
int main(){
    int n,i;
    cin>>n>>i;
    cout<<bit_set(n,i);
    return 0;
}