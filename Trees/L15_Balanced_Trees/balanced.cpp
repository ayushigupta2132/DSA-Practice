#include<iostream>
#include<algorithm>
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
//A Balanced Binary Tree means:
//For every node, the difference between left height and right height ≤ 1
int checkHeight(TreeNode* root){
    if(root == NULL) return 0;
    int lh = checkHeight(root->left);
    if(lh == -1) return -1;
    int rh = checkHeight(root->right);
    if(rh == -1) return -1;
    if(abs(lh - rh) > 1) return -1;
    return 1 + max(lh, rh);
}

bool isBalanced(TreeNode* root){
    return checkHeight(root) != -1;
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    if(isBalanced(root))
        cout << "Tree is balanced";
    else
        cout << "Tree is not balanced";
    return 0;
}
//tc=0(n)
//sc=0(n)...skew tree