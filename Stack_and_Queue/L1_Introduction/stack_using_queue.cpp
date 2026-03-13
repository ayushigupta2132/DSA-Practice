//implement stack using queue

// Stack using ONE Queue

#include<iostream>
#include<queue>
using namespace std;

class StackUsingQueue{
private:
    queue<int> q;   // single queue

public:
    // PUSH → costly (O(N))
    void push(int x){
        int n = q.size(); // number of elements before push
        q.push(x);        // push new element at rear

        // rotate previous elements behind x
        for(int i = 0; i < n; i++){
            q.push(q.front()); // move front to rear
            q.pop();
        }
    }

    // POP → remove top (front of queue)
    void pop(){
        if(q.empty()){
            cout<<"Stack Underflow\n";
            return;
        }
        q.pop();
    }

    // TOP → front of queue
    int getTop(){
        if(q.empty()){
            cout<<"Stack is empty\n";
            return -1;
        }
        return q.front();
    }

    // SIZE
    int size(){
        return q.size();
    }
};

int main(){
    StackUsingQueue s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Top: "<<s.getTop()<<endl; // 30

    s.pop();

    cout<<"Top after pop: "<<s.getTop()<<endl; // 20
    cout<<"Size: "<<s.size()<<endl;

    return 0;
}
