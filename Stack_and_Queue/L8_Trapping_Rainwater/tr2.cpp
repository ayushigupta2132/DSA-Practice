//tell the number of units of water stored between the buildings

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = arr.size();
    int lmax=0,rmax=0,total=0;
    int l=0;
    int r=n-1;
    while(l<r){
        if(arr[l]<=arr[r]){
            if(lmax>arr[l]){
                total+=lmax-arr[l];
            }
            else{
                lmax=arr[l];
            }
            l=l+1;
        }
        else{
            if(rmax>arr[r]){
                total+=rmax-arr[r];
            }
            else{
                rmax=arr[r];
            }
            r=r-1;
        }
    }
    cout << "Total units of water stored: " << total;
    return 0;
}