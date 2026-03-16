#include <iostream>
#include<queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

TreeNode* widthofbinarytree(TreeNode* root) {
    if(!root) return 0;
    int ans=0;
    queue<pair<TreeNode*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        int size=q.size();
        int min=q.front().second;
        int first,last;
        for(int i=0;i<size;i++){
            int cur_id=q.front().second-min;
            TreeNode* node=q.front().first;
            q.pop();
            if(i==0) first=cur_id;
            if(i==size-1) last=cur_id;
            if(node->left) q.push({node->left,cur_id*2+1});
            if(node->right) q.push({node->right,cur_id*2+2});
        }
        ans=max(ans,last-first+1);
    }
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    TreeNode* p = root->left;
    TreeNode* q = root->right;
    TreeNode* ans = widthofbinarytree(root);
    cout<<"Width= " << widthofbinarytree(root)<<endl;
    return 0;
}