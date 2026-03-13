//left rotate by d elements
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }//stored in temp
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }//shifted
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }//put back temp
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    return 0;
}
//brute
//TC=O(n+d)
//SC=O(d)....extra space