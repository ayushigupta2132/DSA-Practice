//brute
#include<iostream>
#include<algorithm>
using namespace std;
bool linearsearch(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return true;
        }
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    int ans[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int longest=1;
    for(int i=0;i<n;i++){
        int x=arr[i];
        int count=1;
        while(linearsearch(arr,n,x+1)==true){
            x=x+1;
            count=count+1;
        }
    }

    return 0;
}
//tc=0(n^2)
//sc=0(1)