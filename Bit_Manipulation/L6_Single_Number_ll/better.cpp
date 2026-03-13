//find the single occurance of a number in an array
//every number appears thrice except one
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans=0;
    for(int bitindex=0;bitindex<=31;bitindex++){
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]&(1<<bitindex)) count++;
        }
        if(count%3==1){
            ans=ans | (1<<bitindex);
        }
    }
    cout<<ans;
    return 0;
}
//tc=0(n*32)
//sc=0(1)

