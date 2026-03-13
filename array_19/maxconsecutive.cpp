//find maximum consecutive 1's
//[1,1,0,1,1,1,0,1,1]...ans=3
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int maxi=0;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count+=1;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    cout<<maxi;
    return 0;
}