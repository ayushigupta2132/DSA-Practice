//Search element in an rotated sorted array
//Brute-force approach will be to do a linear search
//but in binary search we eliminate one half of the array because the array is sorted
//therefore just checing on one half is not enough
//here we can not do that because the array is rotated .. like 7 8 9 1 2 3 4 5 6
//we have to identify which is the sorted half(left half/right half)

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            cout<<mid;
        }

        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<=target && target<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return 0;
}