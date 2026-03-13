//print name 5 times
#include<iostream>
using namespace std;
void print(int n){
    if(n>5) return;
    cout<<"Ayushi"<<endl;
    print(n+1);
}
int main(){
    print(1);
    return 0;
}