//print n to 1
#include<iostream>
using namespace std;
int num(int i,int n){
    if(n==0) return 0;
    cout<<n<<endl;
    num(i,n-1);
}
int main(){
    num(1,20);
    return 0;
}
//TC= O(n)
//SC= O(n)