//The smallest index such that the number at that index
//is GREATER than the given number
//If there exist a target jo last index wale number se bhi zyada bda hai
//then it returns the next hypothetical index i.e size of the array
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
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>n){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans;
    return 0;
}
//tc=log(n)..base 2