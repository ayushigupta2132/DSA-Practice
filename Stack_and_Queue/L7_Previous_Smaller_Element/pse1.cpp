//find out the previous smaller element in the series

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={5,3,9,1,7,5};
    int n=arr.size();
    vector<int> pse(n,-1);
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i]){
                pse[i]=arr[j];
                break;
            }
        }
    }
    for(int i=0;i<n;i++) {
        cout<<pse[i]<< " ";
    }
    return 0;
}
//tc=0(n^2)
//sc=0(n)