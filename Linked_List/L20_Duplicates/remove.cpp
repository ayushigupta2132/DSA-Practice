//remove the duplicates from the sorted given dll

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};

Node* convertArrtoLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        temp->prev=mover;
        mover=temp;
    }
    return head;
} 

Node* duplicate(Node* head){
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL){//only unique elements
        Node* nextNode=temp->next;
        while(nextNode!=NULL && nextNode->data==temp->data){//only duplicate elements
            Node* duplicate=nextNode;
            nextNode=nextNode->next;
            delete duplicate;
        }
        temp->next=nextNode;
        if(nextNode!=NULL) nextNode->prev=temp;
        temp=temp->next;
    }
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
    vector<int> arr={2,2,4,5,6,6};
    Node* head=convertArrtoLL(arr);
    head=duplicate(head);
    printLL(head);
    return 0;
}

//tc=0(n)
//sc=0(1)