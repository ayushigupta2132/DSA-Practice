#include<iostream>
using namespace std;
void printname(string name){
    cout<<"Hey "<<name;
}
int main(){
    string name;
    cin>>name;
    printname(name);
    return 0;
}