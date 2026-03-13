#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int dup=n;
    while(n>0){
        int ld=n%10;
        sum+=(ld*ld*ld);
        n=n/10;
    }
    if(dup==sum) cout<<"True";
    else cout<<"False";
    return 0;
}