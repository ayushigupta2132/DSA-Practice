//take an array and usko backside se iterate kro
//arr[n]=[10,22,12,3,0,6]
//agr 6 se start krte hue har ek element check kra
//and usse bda koi element nikla
//to uska mtlb uss element ke right side me saare numbers usse chote honge
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int maxi=INT_MIN;
    int n;
    cin>>n;
    int arr[100];
    int ans[100];
    int k=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans[k]=arr[i];
            k++;
        }
        maxi=max(maxi,arr[i]);
    }
    for(int i=0;i<k;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
//this will return the answer in reversed order
//tc=0(n)
//sc=0(n)