//minimise the maximu distance between the gas stations

#include<iostream>
#include<vector>
#include<algorithm>
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
    for(int gasStations=1;gasStations<=k;gasStations++){
        long double maxsection=-1;
        int maxindex=-1;
        for(int i=0;i<n-1;i++){
            long double diff=arr[i+1]-arr[i];
            long double sectionlength=diff/(long double)(howmany[i]+1);
            if(sectionlength>maxsection){
                maxsection=sectionlength;
                maxindex=i;
            }
        }
        howmany[maxindex]++;
    }
    long double maxAns=-1;
    for(int i=0;i<n-1;i++){
        long double diff=arr[i+1]-arr[i];
        long double sectionlength=diff/(long double)(howmany[i]+1);
        maxAns=max(maxAns,sectionlength);
    }
    cout<<maxAns;
    return 0;
}
//tc=0(k*n)
//sc=0(n)