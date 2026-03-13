#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isLeaf(Node* root){
    return (!root->left && !root->right);
}

void addLeftBoundary(Node* root, vector<int> &res){
    Node* cur = root->left;
    while(cur){
        if(!isLeaf(cur)) res.push_back(cur->data);
        if(cur->left) cur = cur->left;
        else cur = cur->right;
    }
}

void addRightBoundary(Node* root, vector<int> &res){
    Node* cur = root->right;
    vector<int> tmp;

    while(cur){
        if(!isLeaf(cur)) tmp.push_back(cur->data);
        if(cur->right) cur = cur->right;
        else cur = cur->left;
    }

    for(int i = tmp.size()-1; i >= 0; i--){
        res.push_back(tmp[i]);
    }
}

void addLeaves(Node* root, vector<int> &res){
    if(isLeaf(root)){
        res.push_back(root->data);
        return;
    }

    if(root->left) addLeaves(root->left, res);
    if(root->right) addLeaves(root->right, res);
}

vector<int> printBoundary(Node *root){
    vector<int> res;

    if(!root) return res;

    if(!isLeaf(root)) res.push_back(root->data);

    addLeftBoundary(root, res);//0(height)
    addLeaves(root, res);//0(n)
    addRightBoundary(root, res);//0(height)

    return res;
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> ans = printBoundary(root);

    for(int x : ans)
        cout << x << " ";

    return 0;
}
//tc=0(n)
//sc=0(n)
