#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void findSubsets(int ind,vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans){
    ans.push_back(ds);
    for(int i=ind;i<arr.size();i++){
        if(i!=ind && arr[i]==arr[i-1]) continue;
        ds.push_back(arr[i]);
        findSubsets(i+1,arr,ds,ans);
        ds.pop_back();
    }
}

int main(){
    vector<int> arr={3,2,2,1,2,1,3,2};
    vector<vector<int>> ans;
    vector<int> ds;
    sort(arr.begin(),arr.end());
    findSubsets(0,arr,ds,ans);
    cout << "Subsets:\n";
    for (auto subset : ans) {
        cout << "{ ";
        for (int x : subset) {
            cout << x << " ";
        }
        cout << "}\n";
    }
    return 0;
}