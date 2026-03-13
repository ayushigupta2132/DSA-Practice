//find the Nth root of an integer(m)

#include<iostream>
using namespace std;
int func(int mid,int n,int m){
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*mid;
        if(ans>m) return 2;
    }
    if(ans==m) return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int low=1;
    int high=m;
    while(low<=high){
        int mid=(low+high)/2;
        int midN=func(mid,n,m);
        if(midN==1){
            cout<<mid;
        }
        else if(midN<0) low=mid+1;
        else high=mid-1;
    }
    return 0;
}