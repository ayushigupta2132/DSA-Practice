//insert before node in dll...not before head

#include<iostream>
#include<vector>
using namespace std;
class Node{
     public:
     int data;
     Node* next;
     Node* back;

     public:
     Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
     }

     public:
     Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
     }
};

Node* converarr2Ddll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* insert_head(Node* head, int val){
        Node* newhead=new Node(val,head,nullptr);
        head->back=newhead;
        return newhead;
}

void insert_node(Node* node, int val){
    Node* prev=node->back;
    Node* newNode= new Node(val,node,prev);
    prev->next=newNode;
    node->back=newNode;
}
int main(){
    vector<int> arr={2,5,8,7};
    Node* head=converarr2Ddll(arr);
    insert_node(head->next,10);
    print(head);
    return 0;
}