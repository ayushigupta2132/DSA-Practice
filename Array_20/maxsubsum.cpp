//find the maximum sum among a subarray
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxi=max(sum,maxi);
        }
    }
    cout<<maxi;
    return 0;
}
//brute
//tc=0(n^3)
//sc=0(1)