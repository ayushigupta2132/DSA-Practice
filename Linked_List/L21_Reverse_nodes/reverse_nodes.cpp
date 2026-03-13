//reverse the nodes in the group of k elements in ll

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

Node* getKthNode(Node* temp,int k){
    k-=1;
    while(temp!=NULL && k>0){
        k--;
        temp=temp->next;
    }
    return temp;
}

Node* reverse_ll(Node* head){
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

Node* reverse_k(Node* head,int k){
    Node* temp=head;
    Node* prevLast=NULL;
    while(temp!=NULL){
        Node* KthNode=getKthNode(temp,k);
        if(KthNode==NULL){
            if(prevLast) prevLast->next=temp;
            break;
        }
        Node* nextNode=KthNode->next;
    KthNode->next=NULL;
    reverse_ll(temp);
    if(temp==head) head=KthNode;
    else prevLast->next=KthNode;
    prevLast=temp;
    temp=nextNode;
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
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    Node* head=convertArrtoLL(arr);
    head=reverse_k(head,3);
    printLL(head);
    return 0;
}

//tc=0(2n)
//sc=0(1)