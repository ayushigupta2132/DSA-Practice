//rearrange the elements by sign like 
//order same rahe but +,-,+,- hojaye
//n hmesha even hi hoga
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pos[n/2],neg[n/2];
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos[]+=arr[i];
        }
        else{
            neg[]+=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//brute
//tc=0(2n)
//sc=0(n)