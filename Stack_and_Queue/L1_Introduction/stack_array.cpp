// Rule: LIFO — Last In, First Out
// Core operations
// push(x) → insert at top
// pop() → remove top
// top() → read top (no delete)
// size()
// Mental model: A vertical container. Last inserted item is removed first.

#include <iostream>
using namespace std;

class StackImplementation {
private:
    int top;          // This will store index of the top element
    int st[10];       // Fixed size array of stack (capacity = 10)

public:
    // Constructor → runs automatically when object is created
    StackImplementation() {
        top = -1;     // Initially stack is empty, so top = -1
    }

    // PUSH FUNCTION → insert element into stack
    void push(int x) {
        // Check overflow condition
        if (top >= 9) {     // last valid index is 9 (0 to 9)
            cout << "Stack Overflow! Cannot push " << x << endl;
            return;
        }

        top = top + 1;   // move top to next position
        st[top] = x;     // store element at top index
        cout << x << " pushed into stack\n";
    }

    // POP FUNCTION → remove top element
    void pop() {
        // Check underflow condition
        if (top == -1) {
            cout << "Stack Underflow! Nothing to pop\n";
            return;
        }

        cout << st[top] << " popped from stack\n";
        top = top - 1;   // simply decrease top (element is considered removed)
    }

    // TOP FUNCTION → return top element without removing
    int getTop() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }

        return st[top];   // return the element at top index
    }

    // SIZE FUNCTION → number of elements in stack
    int size() {
        return top + 1;   // because index starts from 0
    }
};

int main() {
    StackImplementation s;

    s.push(4);
    s.push(7);
    s.push(10);

    cout << "Top element: " << s.getTop() << endl;

    s.pop();

    cout << "Current size: " << s.size() << endl;

    return 0;
}

//tc=0(1)
//sc=0(n)