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


class Solution{
	public:
    void preorderTraversal(TreeNode* root,vector<int> &preorder){
        if(root==nullptr) return;
        preorder.push_back(root->val);
        preorderTraversal(root->left,preorder);
        preorderTraversal(root->right,preorder);
    }
    void inorderTraversal(TreeNode* root,vector<int> &inorder){
        if(root==nullptr) return;
        inorderTraversal(root->left,inorder);
        inorder.push_back(root->val);
        inorderTraversal(root->right,inorder);
    }
    void postorderTraversal(TreeNode* root,vector<int> &postorder){
        if(root==nullptr) return;
        postorderTraversal(root->left,postorder);
        postorderTraversal(root->right,postorder);
        postorder.push_back(root->val);
    }
		vector<vector<int>> treeTraversal(TreeNode* root){
			vector<int> inorder;
            vector<int> preorder;
            vector<int> postorder;

            inorderTraversal(root, inorder);
            preorderTraversal(root, preorder);
            postorderTraversal(root, postorder);

            vector<vector<int>> ans;
            ans.push_back(inorder);
            ans.push_back(preorder);
            ans.push_back(postorder);  

            return ans;
		}
};