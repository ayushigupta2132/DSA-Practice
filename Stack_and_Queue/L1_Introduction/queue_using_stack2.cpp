// Queue using TWO Stacks (cheap push, costly pop/front when needed)

#include<iostream>
#include<stack>
using namespace std;

class QueueUsingStacks{
private:
    stack<int> s1; // used for push
    stack<int> s2; // used for pop/front

public:

    // PUSH operation → O(1)
    void push(int x){
        s1.push(x); // always push into s1
    }

    // POP operation → Amortized O(1)
    void pop(){

        // If s2 is empty, move elements from s1 to s2
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top()); // reverse order
                s1.pop();
            }
        }

        // Underflow check
        if(s2.empty()){
            cout<<"Queue Underflow\n";
            return;
        }

        s2.pop(); // front element removed
    }

    // FRONT operation → Amortized O(1)
    int getFront(){

        // If s2 is empty, move elements from s1 to s2
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top()); // reverse order
                s1.pop();
            }
        }

        if(s2.empty()){
            cout<<"Queue is empty\n";
            return -1;
        }

        return s2.top(); // front element
    }

    // SIZE operation
    int size(){
        return s1.size() + s2.size(); // total elements
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
