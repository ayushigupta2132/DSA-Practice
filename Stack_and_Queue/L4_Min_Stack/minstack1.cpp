#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<pair<int,int>> st;

public:
    void push(int val) {
        if (st.empty()) {
            st.push({val, val});
        } 
        else {
            st.push({val, min(val, st.top().second)});
        }
    }

    void pop() {
        if (!st.empty())
            st.pop();
    }
    int top() {
        return st.top().first;
    }
    int getMin() {
        return st.top().second;
    }
    bool empty() {
        return st.empty();
    }
};

int main() {
    MinStack s;
    s.push(5);
    s.push(2);
    s.push(8);
    s.push(1);

    cout << "Top: " << s.top() << endl;       // 1
    cout << "Min: " << s.getMin() << endl;    // 1

    s.pop();
    cout << "Min after pop: " << s.getMin();  // 2
}
//tc=0(1)
//sc=0(2n)
