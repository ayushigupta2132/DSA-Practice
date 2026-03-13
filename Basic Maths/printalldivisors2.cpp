#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if((n/i)!=i){
                cout<<(n/i)<<" ";
            }
        }
    }
    return 0;
}
//Ans will not be sorted..we can do that using vector and sort
//i<=sqrt(n) equals i*i<=n