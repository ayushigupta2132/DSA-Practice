//xor the numbers till 1 to given N
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=ans^i;
    }
    cout<<ans;
    return 0;
}
//tc=0(n)
//sc=0(1)