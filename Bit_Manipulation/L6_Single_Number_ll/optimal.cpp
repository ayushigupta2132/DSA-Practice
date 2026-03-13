//find the single occurance of a number in an array
//every number appears thrice except one
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //arr[i] will go to ones , if not in twos
    //arr[i] will go to twos , if it is in ones  
    //arr[i] will go to threes , if it is in twos....we dont need it 
    int ones=0;
    int twos=0;
    for(int i=0;i<n;i++){
        ones = (ones^arr[i]) & (~twos);
        twos = (twos^arr[i]) & (~ones);
    }
    cout<<ones;
    return 0;
}
//tc=0(n)
//sc=0(1)

