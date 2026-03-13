//Moore's Voting Algorithm
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int element;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            element=arr[i];
        }
        else if(arr[i]==element){
            count++;
        }
        else{
            count--;
        }
    }
    int m;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            count++;
        }
    }
    if(count>n/2){
            cout<<element;
            return 0;
    }
    cout<<-1;
    return 0;
}
//optimal
//tc=0(n)...+0(n) if we have to check fior majority element
//sc=0(1)