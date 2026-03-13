//print 1 to n (backtrack)
#include<iostream>
using namespace std;
int num(int i,int n){
    if(i<1) return 0;
    num(i-1,n);
    cout<<i<<endl;
}
int main(){
    num(20,20);
    return 0;
}
