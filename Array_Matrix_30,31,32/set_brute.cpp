//set matrix zeroes
#include<iostream>
using namespace std;
int markrow(int arr[][100],int m,int i){
    for(int j=0;j<m;j++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}
int markcolumn(int arr[][100],int n,int j){
    for(int i=0;i<n;i++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}
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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){//0(n*m)
            if(arr[i][j]==0){
                markrow(arr,m,i);//0(m)
                markcolumn(arr,n,j);//0(n)
            }
        }
    }
    //mark the 0 rows and columns as -1
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==-1){//0(n*m)
                arr[i][j]=0;
            }
        }
    }
    //marks the -1 as 0
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //prints the array
    return 0;
}
//tc=0(n*m+n+m+n*m)=0(n^3)
//sc=0(1)
