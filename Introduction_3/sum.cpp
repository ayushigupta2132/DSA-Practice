#include<iostream>
using namespace std;
void sum(int a,int b){
    int add=a+b;
    cout<<"Sum is:"<<add;
}
int main(){
    int a,b;
    cin>>a>>b;
    sum(a,b);
    return 0;
}