#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> postorderTraversal(TreeNode* root){
    vector<int> postorder;
    stack<TreeNode*> st;
    TreeNode* cur = root;
    while(cur != NULL || !st.empty()){
        if(cur != NULL){
            st.push(cur);
            cur = cur->left;
        }
        else{
            TreeNode* temp = st.top()->right;
            if(temp == NULL){
                temp = st.top();
                st.pop();
                postorder.push_back(temp->val);
                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    postorder.push_back(temp->val);
                }
            }
            else{
                cur = temp;
            }
        }
    }
    return postorder;
}

int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    vector<int> ans = postorderTraversal(root);
    for(int x : ans)
        cout << x << " ";
    return 0;
}