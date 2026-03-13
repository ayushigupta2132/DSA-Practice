#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5);  //{5,2,4}
    ls.emplace_front(); //{0,5,2,4}
    //rest fuctions are same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap
    //insert is costly,push_front is cheap
    for(int i:ls){
        cout<<i<<" ";
    }
    return 0;
}