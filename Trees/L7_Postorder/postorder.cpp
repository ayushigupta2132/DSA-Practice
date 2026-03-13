#include<iostream>
using namespace std;
struct Node
{
    int data;    //Stores the value of the node.
    Node* left;  //Pointer that stores address of the left child.
    Node* right; //Pointer that stores address of the right child.

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void postorder(Node* node){
    if(node==NULL) return;
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    postorder(root);

    return 0;
}