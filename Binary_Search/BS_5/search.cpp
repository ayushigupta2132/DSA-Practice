//Search an element in a rotated sorted array which has duplicates present in it
//tell the presence of element...not the index
//we can't use the approach that we used in searching unique element
// b/c if arr[low]=arr[mid]=arr[high]....like 3 1 2 3 3 3 3 
//then we can't identify the sorted half

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
            cout<<true;
        }

        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++;
            high--;
            continue;
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
//TC=0(logn)..base 2
//TC=0(n/2)..worst case...3 3 1 3 3 3 3