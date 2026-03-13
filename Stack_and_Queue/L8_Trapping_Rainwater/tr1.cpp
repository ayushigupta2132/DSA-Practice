//tell the number of units of water stored between the buildings

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=arr.size();
    vector<int> leftMax(n), rightMax(n);
    // Fill leftMax
    leftMax[0] = arr[0];
    for(int i = 1; i < n; i++){
        leftMax[i] = max(leftMax[i-1], arr[i]);
    }
    // Fill rightMax
    rightMax[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        rightMax[i] = max(rightMax[i+1], arr[i]);
    }
    int total=0;
    for(int i=0;i<n;i++){
        if(arr[i]<leftMax[i] && arr[i]<rightMax[i]){
            total+=(min(leftMax[i],rightMax[i])-arr[i]);
        }
    }
    cout << "Total units of water stored: " << total;
    return 0;
}