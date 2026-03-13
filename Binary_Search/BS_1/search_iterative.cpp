#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[100];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            cout<<mid;
            return 0;
        }
        else if(target>nums[mid]) low=mid+1;
        else high=mid-1;
    }
    cout<<-1;
    return 0;
}