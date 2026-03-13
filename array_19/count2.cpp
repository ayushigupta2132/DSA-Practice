//hashing
//define hash array of max_element+1 size
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    //0(n)..find max element
    unordered_map<int,int>hash; //declaring
    hash[maxi]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    //0(n)..adds elements into hash array
    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1){
            cout<<arr[i];
        }
    }
    //0(n)...checks for single occurance
    return 0;
}
//better
//tc=0(3n)
//sc=0(maxi)