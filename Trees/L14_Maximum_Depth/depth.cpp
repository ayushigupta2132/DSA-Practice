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

int maxdepth(TreeNode* root){
    if(root == NULL) return 0;
    int lh = maxdepth(root->left);
    int rh = maxdepth(root->right);
    return 1 + max(lh, rh);
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout << "Height of tree: " << maxdepth(root);
    return 0;
}
//tc=0(n)
//sc=0(n)..worst..skewed trees