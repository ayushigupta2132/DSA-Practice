#include<iostream>
using namespace std;
void dosomething(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num=10;
    dosomething(num);
    cout<<num<<endl;
//it printed 20 because this is pass by value
//since we have used & symbol
    return 0;
}
//arrays always goes with reference