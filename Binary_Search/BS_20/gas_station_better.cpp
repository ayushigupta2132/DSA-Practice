#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int> howmany(n-1,0);
    priority_queue<pair<long double,int>> pq;
    for(int i=0;i<n-1;i++){
        pq.push({arr[i+1]-arr[i],i});
    }
    for(int gasStations=1;gasStations<=k;gasStations++){
        auto tp=pq.top(); pq.pop();
        int secindex=tp.second;
        howmany[secindex]++;
        long double inidiff=arr[secindex+1]-arr[secindex];
        long double newSecLen=inidiff/(long double)(howmany[secindex]+1);
        pq.push({newSecLen,secindex});
    }
    cout<<pq.top().first;
    return 0;
}