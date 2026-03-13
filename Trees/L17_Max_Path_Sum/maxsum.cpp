#include<iostream>
#include<algorithm>
#include<climits>
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

int maxpathdown(TreeNode* node, int &maxi){
    if(node == NULL) return 0;
    int left = max(0, maxpathdown(node->left, maxi));
    int right = max(0, maxpathdown(node->right, maxi));
    maxi = max(maxi, left + right + node->val);
    return max(left, right) + node->val;
}

int maxpathsum(TreeNode* root){
    int maxi = INT_MIN;
    maxpathdown(root, maxi);
    return maxi;
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout << "Maximum Path Sum: " << maxpathsum(root);
    return 0;
}