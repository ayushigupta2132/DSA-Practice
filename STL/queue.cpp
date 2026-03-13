#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.emplace(4);//{1,2,4}

    q.back() +=5;
    cout<<q.back()<<endl;//9
    //now q={1,2,9}
    cout<<q.front()<<endl;//1
    q.pop();
    //queue is FIFO i.e first in first out
    cout<<q.front();//2
    //size,swap,empty are same as stack
    return 0;
}