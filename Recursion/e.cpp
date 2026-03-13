//print n to 1 (backtrack)
#include<iostream>
using namespace std;
int num(int i,int n){
    if(i>n) return 0;
    num(i+1,n);
    cout<<i<<endl;
}
int main(){
    num(1,20);
    return 0;
}