#include<iostream>
using namespace std;
void dosomething(int num){
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
//it printed 10 because this is pass by value
//copy of num is sent to dosomething..not the original num
    return 0;
}