// Queue using Linked List
// Dynamic size, no fixed capacity

#include<iostream>
using namespace std;

// Node structure
struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class QueueLL{
private:
    Node* start;   // front of queue
    Node* end;     // rear of queue
    int sz;        // current size

public:
    // Constructor
    QueueLL(){
        start = NULL;  // queue empty initially
        end = NULL;
        sz = 0;
    }

    // PUSH (enqueue) → insert at rear
    void push(int x){
        Node* temp = new Node(x); // create new node

        if(start == NULL){  // if queue is empty
            start = temp;
            end = temp;
        }
        else{
            end->next = temp; // link last node to new node
            end = temp;       // move end to new node
        }

        sz++; // increase size
    }

    // POP (dequeue) → remove from front
    void pop(){
        if(start == NULL){
            cout<<"Queue Underflow\n";
            return;
        }

        Node* temp = start;   // store current front
        start = start->next;  // move start ahead

        if(start == NULL){    // if queue becomes empty
            end = NULL;
        }

        delete temp; // free memory
        sz--;        // decrease size
    }

    // FRONT operation
    int getFront(){
        if(start == NULL){
            cout<<"Queue is empty\n";
            return -1;
        }
        return start->data;
    }

    // SIZE operation
    int getSize(){
        return sz;
    }
};

int main(){
    QueueLL q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"Front: "<<q.getFront()<<endl;

    q.pop();

    cout<<"Front after pop: "<<q.getFront()<<endl;
    cout<<"Size: "<<q.getSize()<<endl;

    return 0;
}
