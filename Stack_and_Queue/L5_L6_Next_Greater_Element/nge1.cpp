//find out the next greater element in the series

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={5,3,9,1,7,5};
    int n=arr.size();
    vector<int> nge(n,-1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                nge[i]=arr[j];
                break;
            }
        }
    }
    for(int i=0;i<n;i++) {
        cout<<nge[i]<< " ";
    }
    return 0;
}