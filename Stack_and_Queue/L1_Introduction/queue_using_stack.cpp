// Queue using TWO Stacks (costly push, easy pop/front)

#include<iostream>
#include<stack>
using namespace std;

class QueueUsingStacks{
private:
    stack<int> s1; // main stack which will behave like queue
    stack<int> s2; // helper stack for reversing order

public:

    // PUSH operation → O(N)
    void push(int x){

        // Step 1: Move all elements from s1 to s2
        // This reverses the order
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        // Step 2: Push new element into s1
        // This element should be at bottom finally
        s1.push(x);

        // Step 3: Move everything back from s2 to s1
        // Restores order above x
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    // POP operation → O(1)
    void pop(){
        if(s1.empty()){ // underflow check
            cout<<"Queue Underflow\n";
            return;
        }
        s1.pop(); // top of s1 is front of queue
    }

    // FRONT operation → O(1)
    int getFront(){
        if(s1.empty()){
            cout<<"Queue is empty\n";
            return -1;
        }
        return s1.top(); // top of s1 is front
    }

    // SIZE operation
    int size(){
        return s1.size(); // all elements are in s1
    }
};

int main(){
    QueueUsingStacks q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"Front: "<<q.getFront()<<endl; // 10

    q.pop();

    cout<<"Front after pop: "<<q.getFront()<<endl; // 20
    cout<<"Size: "<<q.size()<<endl;

    return 0;
}

//tc=0(n)..push