#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    void recursion(TreeNode* root, int level, vector<int> &res) {
        if(root == NULL) return;

        if(res.size() == level) 
            res.push_back(root->val);

        recursion(root->right, level + 1, res);
        recursion(root->left, level + 1, res);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        recursion(root, 0, res);
        return res;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);

    Solution obj;
    vector<int> ans = obj.rightSideView(root);

    cout << "Right Side View: ";
    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}
//tc=0(n)
//sc=0(h)

//for left view
//recursion(root->left, level + 1, res);
//recursion(root->right, level + 1, res);