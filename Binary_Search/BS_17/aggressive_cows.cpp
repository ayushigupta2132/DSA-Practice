//binary search on answers where you have to find min(max) or max(min)
//Problem is like there is an array which consists of n stalls and the coordinates are given
//like [0 3 4 7 9 10]...6 stalls me 4 cows ko place kro such that
//the min distance between two cows is maximum

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool canweplace(vector<int>& stalls,int dist,int cows){
    int cntcows=1;
    int last=stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-last>=dist){
            cntcows++;
            last=stalls[i];
        }
        if(cntcows>=cows) return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<int> stalls(n);
    for(int i=0;i<n;i++){
        cin>>stalls[i];
    }
    int k;
    cin>>k;
    sort(stalls.begin(),stalls.end());
    int low=1;
    int high=stalls[n-1]-stalls[0];
    while(low<=high){
        int mid=(low+high)/2;
        if(canweplace(stalls,mid,k)==true){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<high;
    return 0;
}