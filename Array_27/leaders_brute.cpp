//leaders are the numbers: jinke right side me numbers usse chote ho
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans[n];
    int k=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            ans[k]=arr[i];
            k++;    
        }
    }
    for(int i=0;i<k;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
//tc=0(n^2)
//sc=0(n)..for storing the array in worst case(all are leaders)
