#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
    return 0;
}
//but here we get TC=O(n)
//we want to reduce this