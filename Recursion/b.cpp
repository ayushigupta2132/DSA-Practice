//print linearly from 1 to n
#include<iostream>
using namespace std;
int num(int i,int n){
    if(i>n) return 0;
    cout<<i<<endl;
    num(i+1,n);
}
int main(){
    num(1,20);
    return 0;
}
//TC= O(n)
//SC= O(n)