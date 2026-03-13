//find the middle of the ll

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};

Node* convertArrtoLL(vector<int> &arr){
    Node* head=new Node(arr[0],nullptr);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
} 

Node* middle(Node* head){
    Node* slow=head;
    Node* fast=head;
    fast=fast->next->next;//skipped one slow to stop at node before middle
    if(head==NULL || head->next==NULL) return NULL;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* middle=slow->next;
    slow->next=slow->next->next;
    free(middle);
    return head;
}

void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr={2,4,6,7,9};
    Node* head=convertArrtoLL(arr);
    head=middle(head);
    printLL(head);
    return 0;
}
//tc=0(n/2)
//sc=0(1)