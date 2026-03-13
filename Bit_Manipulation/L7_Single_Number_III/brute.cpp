//find the single occurance of two numbers in an array using map
//every number appears twice except two
#include<iostream>
#include<vector>
#include<map>
#include<list>
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
    list<int> ans;
    for(auto it : mpp){
        if(it.second == 1){
            ans.push_back(it.first);
        }
    }
    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}
//m=(n/2 + 1)
//tc=0(nlogm)+0(m)
//sc=0(m)

