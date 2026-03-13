//Check for the balanced parentheses
//()[{}()]...balanced
//({)])..unbalanced

#include<iostream>
#include<stack>
using namespace std;

bool func(string s){
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        // If opening bracket, push into stack
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
            // If closing bracket and stack empty → invalid
            if(st.empty()) return false;

            char ch = st.top(); // get top opening bracket
            st.pop();           // remove it

            // Check matching pair
            if((s[i]==')' && ch=='(') ||
               (s[i]=='}' && ch=='{') ||
               (s[i]==']' && ch=='[')){
                continue; // correct pair, move ahead
            }
            else{
                return false; // wrong matching
            }
        }
    }

    // If stack empty → all brackets matched
    return st.empty();
}

int main(){
    string s = "{[()]}";
    
    if(func(s))
        cout<<"Balanced\n";
    else
        cout<<"Not Balanced\n";
    return 0;
}

//tc=0(n)
//sc=0(n)..worst
