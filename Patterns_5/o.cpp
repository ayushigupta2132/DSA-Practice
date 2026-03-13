/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ini=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
              cout<<"*";
        }
        for(int j=0;j<ini;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        ini+=2;
        cout<<endl;
    }
    ini=8;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
              cout<<"*";
        }
        for(int j=0;j<ini;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        ini-=2;
        cout<<endl;
    }
    return 0;
}