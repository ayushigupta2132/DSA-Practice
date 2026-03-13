//hashing using hash map which consists number and it's count
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    unordered_map<int,int>mpp;
    //nlogn
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    //0(n)
    for(auto it:mpp){
        if(it.second>n/2){
            cout<<it.first;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
//better
//tc=0(n^2)..worst
//sc=0(n)..if all unique elements
