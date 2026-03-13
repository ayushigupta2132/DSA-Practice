// We are given asteroids moving left (negative) and right (positive).
// Collision happens only when a right-moving asteroid meets a left-moving one; the smaller one (by absolute value) gets destroyed, or both if equal.
// We use a stack to simulate collisions because the last asteroid may collide first.

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> asteroidCollision(vector<int>& arr){
    stack<int> st;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0) st.push(arr[i]);
        else{
            while(!st.empty() && st.top()>0 && st.top()<abs(arr[i])){
                st.pop();
            }
            if(!st.empty() && st.top()==abs(arr[i])){
                st.pop();
            }
            else if(st.empty() || st.top()<0){
                st.push(arr[i]);
            }
        }
    }
    vector<int> ans(st.size());
    for(int i=st.size()-1;i>=0;i--){
        ans[i]=st.top();
        st.pop();
    }
    return ans;
}

int main(){
    vector<int> arr = {5,10,-5};
    vector<int> res = asteroidCollision(arr);

    for(int x : res){
        cout << x << " ";
    }
    return 0;
}

//tc=0(2n)
//sc=0(n)..worst
