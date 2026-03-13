//Kadane's Algorithm
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    int sum=0;
    int start,ansstart=-1,ansend=-1;
    for(int i=0;i<n;i++){
        if(sum==0){
             start=i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansstart=start;
            ansend=i;

        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;
    return 0;
}
//optimal
//tc=0(n)
//sc=0(1)