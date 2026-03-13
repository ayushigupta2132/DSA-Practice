#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest=arr[0];
    int secsmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            secsmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<secsmallest){
            secsmallest=arr[i];
        }
    }
    cout<<"The second smallest element is:"<<secsmallest;
    return 0;
}