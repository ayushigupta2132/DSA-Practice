#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<long long> st;
    long long mini;

public:
    void push(long long val) {
        if (st.empty()) {
            mini = val;
            st.push(val);
        }
        else {
            if (val >= mini) {
                st.push(val);
            }
            else {
                // push encoded value
                st.push(2*val - mini);
                mini = val;
            }
        }
    }

    void pop() {
        if (st.empty()) return;

        long long n = st.top();
        st.pop();

        if (n < mini) {
            // encoded value, restore previous min
            mini = 2*mini - n;
        }
    }

    long long top() {
        long long n = st.top();
        if (n >= mini) return n;
        return mini;
    }

    long long getMin() {
        return mini;
    }
};
int main() {
    MinStack s;

    s.push(5);
    s.push(3);
    s.push(7);
    s.push(2);

    cout << "Current Top: " << s.top() << endl;      // 2
    cout << "Current Min: " << s.getMin() << endl;   // 2

    s.pop();
    cout << "After pop -> Min: " << s.getMin() << endl; // 3

    s.pop();
    cout << "After pop -> Top: " << s.top() << endl;    // 3
    cout << "After pop -> Min: " << s.getMin() << endl; // 3

    return 0;
}
//tc=0(1)
//sc=0(n)