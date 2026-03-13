//Dutch National Flag Algorithm
//uses 3 pointers
//[0,low-1]=0..extreme left
//[low,mid-1]=1
//[high+1,n-1]=2..extreme right
//[mid,high] is unsorted
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int low=0,mid=0,high=n-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(mid<=high){
        if(arr[mid]==0){
        swap(arr[low],arr[mid]);
        low++,mid++;
    }
    else if(arr[mid]==1){
            mid++;
    }
    else { //arr[mid]==2
           swap(arr[mid],arr[high]);
           high--;
    }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//optimal
//tc=0(n)
//sc=0(1)
