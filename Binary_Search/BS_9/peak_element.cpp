//find the peak element in the array

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>n;
    }
    for(int i=0;i<n;i++){
        if((i==0 || arr[i-1]<arr[i]) && ((i==n-1) || arr[i]>arr[i+1])){
            cout<<i;
        }
    }
    return 0;
}