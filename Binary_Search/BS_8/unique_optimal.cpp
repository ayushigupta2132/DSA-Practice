//find the single element in a sorted array

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
    if(arr[0]!=arr[1]) cout<<arr[0];
    if(arr[n-1]!=arr[n-2]) cout<<arr[n-1];
    int low=1;
    int high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]) cout<<arr[mid];
        //we are in left
        if((mid%2==1 && arr[mid]==arr[mid-1]) || (mid%2==0 && arr[mid]==arr[mid+1])){
            low=mid+1;
        }
        //we are on right
        else{
            high=mid-1;
        }
    }
    return 0;
}