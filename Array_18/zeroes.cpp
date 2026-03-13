//move zeroes to the last
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }//TC=O(n)..soring non zero numbers in temp
    int nz=temp.size();
    for(int i=0;i<nz;i++){
        arr[i]=temp[i];
    }//TC=O(x)...where x is number of non zero elements
    //putting nz numbers into arr
    for(int i=nz;i<n;i++){
        arr[i]=0;
    }//TC=O(n-x)
    //putting 0 at last in arr
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//brute
//TC=O(2n)
//SC=O(x)
//SC=O(n)..worst case where there is no zero..therefore we transfer entire array in temp