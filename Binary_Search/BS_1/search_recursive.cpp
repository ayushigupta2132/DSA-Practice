#include<iostream>
using namespace std;
int search(int nums[],int low,int high,int target){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(nums[mid]==target) return mid;
    else if(target>nums[mid]) return search(nums,mid+1,high,target);
    return search(nums,low,mid-1,target);
}
int main(){
    int n;
    cin>>n;
    int nums[100];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    int ans=search(nums,0,n-1,target);
    cout<<ans;
    return 0;
}
//tc=0(logn)base 2