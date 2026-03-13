//delete all the occurances of a key in ll

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
        temp->prev = mover; 
        mover=temp;
    }
    return head;
} 

Node* delete_val(Node* head, int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            if(temp==head){
                head=temp->next;
            }
            Node* nextNode=temp->next;
            Node* prevNode=temp->prev;
            if(nextNode) nextNode->prev=prevNode;
            if(prevNode) prevNode->next=nextNode;
            delete temp;
            temp=nextNode;
        }
        else{
            temp=temp->next;
        }
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
    vector<int> arr={10,4,10,10,9};
    Node* head=convertArrtoLL(arr);
    head=delete_val(head,10);
    printLL(head);
    return 0;
}

//tc=0(n)
//sc=0(1)
