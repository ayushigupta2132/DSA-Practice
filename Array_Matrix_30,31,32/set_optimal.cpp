#include<iostream>
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
    int col[100]={0};//sc
    int row[100]={0};//sc
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    //track...0(n*m)
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(row[i] ||col[j]){
                arr[i][j]=0;
            }
        }
    }
    //retrack...0(n*m)
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //output
    return 0;
}
//tc=0(2*n*m)
//sc=0(n)+0(m)