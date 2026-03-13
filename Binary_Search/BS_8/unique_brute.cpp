//find the single element in a sorted array
//brute force approach

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1) cout<<arr[0];
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]!=arr[i+1]){
                cout<<arr[i];
            }
        }
        else if(i==n-1){
            if(arr[i]!=arr[i-1]){
                cout<<arr[i];
            }
        }
        else{
            if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
                cout<<arr[i];
            }
        }
    }
    return 0;
}
//O(n)