#include<iostream>
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

bool check(TreeNode* p, TreeNode* q){
    if(p == NULL || q == NULL) return (p == q);
    return (p->val == q->val)
        && check(p->left, q->left)
        && check(p->right, q->right);
}

int main(){
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);
    if(check(root1, root2))
        cout << "Trees are identical";
    else
        cout << "Trees are not identical";

    return 0;
}
//tc=0(n)
//sc=0(n)