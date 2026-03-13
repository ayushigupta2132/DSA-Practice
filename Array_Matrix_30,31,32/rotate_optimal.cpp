//transpose and reverse the rows
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //input
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    //transpose
    for(int i=0;i<=n-1;i++){
        reverse(arr[i],arr[i]+n);
    }
    //reversing each row
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //output
    return 0;
}
//tc=0(n/2*n/2)+0(n*n/2)
//sc=0(1)