//stack using linked list
// No fixed size
// Uses memory only as needed (dynamic)

#include<iostream>
using namespace std;

// Node structure for linked list
struct Node{
    int data;      // value stored in node
    Node* next;    // pointer to next node

    // Constructor for Node
    Node(int x){
        data = x;
        next = NULL;
    }
};

class StackLL{
private:
    Node* top;     // pointer to top of stack
    int sizee;        // current size of stack

public:
    // Constructor
    StackLL(){
        Node* top; // stack initially empty
        sizee = 0;
    }

    // PUSH operation
    void push(int x){
        Node* temp = new Node(x); // create new node    
        temp->next = top;        // new node points to old top
        top = temp;              // move top to new node
        sizee++;                    // increase size
    }

    // POP operation
    void pop(){
        if(top == NULL){         // underflow check
            cout<<"Stack Underflow\n";
            return;
        }
        Node* temp = top;       // store current top
        top = top->next;        // move top ahead
        delete temp;            // delete old node
        sizee--;                   // decrease size
    }

    // TOP operation
    int getTop(){
        if(top == NULL){
            cout<<"Stack is empty\n";
            return -1;
        }
        return top->data;       // return top value
    }

    // SIZE operation
    int size(){
        return sizee;
    }
};

int main(){
    StackLL s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Top: "<<s.getTop()<<endl;

    s.pop();

    cout<<"Size: "<<s.size()<<endl;

    return 0;
}

