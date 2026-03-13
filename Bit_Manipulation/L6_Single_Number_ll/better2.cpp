//find the single occurance of a number in an array
//every number appears thrice except one
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i=1;i<n;i=i+3){//traversing middle element
        if(arr[i]!=arr[i-1]){
            cout<<arr[i-1];
            return 0;
        }
    }
    cout<<arr[n-1];
    return 0;
}
//tc=0(nlogn)+0(n/3)
//sc=0(1)

