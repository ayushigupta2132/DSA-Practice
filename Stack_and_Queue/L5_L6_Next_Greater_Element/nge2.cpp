//find out the next greater element in the series

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> findNGE(vector<int> &arr){
    int n=arr.size();
    vector<int> nge(n,-1);
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            nge[i]=-1;
        }
        else{
            nge[i]=st.top();
        }
        st.push(arr[i]);
    }
    return nge;
}
int main(){
    vector<int> arr={4,5,2,10,8};
    vector<int> ans=findNGE(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}