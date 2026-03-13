#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int sum(int arr[],int n,int d){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ceil((double)arr[i]/(double)d);
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int threshold;
    cin>>threshold;
    int low=1;
    int high=*max_element(arr,arr+n);
    while(low<=high){
        int mid=(low+high)/2;
        if(sum(arr,n,mid)<=threshold){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<low;
    return 0;
}
//tc=log(max)*n