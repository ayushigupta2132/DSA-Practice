// Rule: FIFO — First In, First Out
// Core operations
// push(x) → insert at rear (end)
// pop() → remove from front (start)
// top() / front() → read front
// size()
// Mental model: A line. First person in line leaves first.

#include <iostream>
using namespace std;

class QueueImplementation {
private:
    int start;        // index of front element
    int end;          // index of rear element
    int curSize;      // current number of elements
    int arr[10];      // fixed size array (capacity = 10)

public:
    // Constructor → runs automatically when object is created
    QueueImplementation() {
        start = -1;   // queue initially empty
        end = -1;     
        curSize = 0;  
    }

    // PUSH FUNCTION → insert element at rear (enqueue)
    void push(int x) {
        // Check overflow condition
        if (curSize == 10) {
            cout << "Queue Overflow! Cannot push " << x << endl;
            return;
        }

        // First element insertion
        if (curSize == 0) {
            start = 0;
            end = 0;
        } 
        else {
            end = (end + 1) % 10;  // circular movement
        }

        arr[end] = x;   // store element at rear
        curSize++;      // increase size
        cout << x << " pushed into queue\n";
    }

    // POP FUNCTION → remove front element (dequeue)
    void pop() {
        // Check underflow condition
        if (curSize == 0) {
            cout << "Queue Underflow! Nothing to pop\n";
            return;
        }

        cout << arr[start] << " popped from queue\n";

        // If only one element was present
        if (curSize == 1) {
            start = -1;
            end = -1;
        } 
        else {
            start = (start + 1) % 10;  // circular movement
        }

        curSize--;  // decrease size
    }

    // TOP / FRONT FUNCTION → return front element without removing
    int getFront() {
        if (curSize == 0) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[start];
    }

    // SIZE FUNCTION → number of elements in queue
    int size() {
        return curSize;
    }
};

int main() {
    QueueImplementation q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.getFront() << endl;

    q.pop();

    cout << "Current size: " << q.size() << endl;

    return 0;
}

//tc=0(1)
//sc=0(n)