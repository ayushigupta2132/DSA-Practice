//set the ith bit using left shift

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

int main(){
    int n,i;
    cin>>n>>i;
    string num=decimaltobinary(n);
    cout << (n | (1<<i));
    return 0;
}