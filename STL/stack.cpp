#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(3);//{3,3,2,1}
    st.emplace(5);//{5,3,3,2,1}

    cout<<st.top()<<endl;//5
    //indexing is invalid in stack
    st.pop();//{3,3,2,1}
    //Works on LIFO i.e last in first out
    cout<<st.top()<<endl;//3
    cout<<st.size()<<endl;//4
    cout<<st.empty()<<endl;//False

    stack<int> st1,st2;
    st1.swap(st2);
    return 0;
}
//pop,push,top has TC=0(1)
