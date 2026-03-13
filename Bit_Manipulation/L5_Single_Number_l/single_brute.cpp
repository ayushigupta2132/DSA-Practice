//find the single occurance of a number in an array using map
//every number appears twice
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second == 1){
            cout << it.first;
            break;
        }
    }
    return 0;
}
//tc=0(nlogn)
//sc=0(n)

