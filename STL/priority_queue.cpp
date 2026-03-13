#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.push(3);//{8,5,3,2}
    pq.emplace(10);//{10,8,5,3,2}
    //stores in priority i.e descending order or maximum heap
    cout<<pq.top()<<endl;//10
    
    pq.pop();//pops 10
    cout<<pq.top()<<endl;//8
    //size,swap,empty are same as others

    //Minimum Heap i.e ascending order
    priority_queue<int,vector<int>,greater<int>> p;
    p.push(5);//{5}
    p.push(2);//{2,5}
    p.push(8);//{2,5,8}
    p.push(3);//{2,3,5,8}
    p.emplace(10);//{2,3,5,8,10}

    cout<<p.top()<<endl;//2
    return 0;
}
//push and pop TC=0(logn)
//top TC=0(1)
