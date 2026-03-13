//find the square root of a number and return the integer value

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int low=1;
    int high=n;
    while(low<=high){
        int mid=(low+high)/2;
        int square=mid*mid;
        if(square<=n){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<high;
    return 0;
}