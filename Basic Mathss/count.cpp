#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        int ld=n%10;
        n=n/10;
        count+=ld;
    }
    return 0;
}