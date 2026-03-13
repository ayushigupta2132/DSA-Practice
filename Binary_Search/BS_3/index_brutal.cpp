//determine the first and the last occurance of the number
//in case it doesn't exist..return -1
//linear search
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            if(first==-1){
                first=i;
            }
            last=i;
        }
    }
    cout<<"{"<<first<<","<<last<<"}";
    return 0;
}
//tc=0(n)