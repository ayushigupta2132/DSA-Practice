//merge the two sorted ll

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

Node* merge(Node* head1,Node* head2){
    Node* t1=head1;
    Node* t2=head2;
    Node* dummynode=new Node(-1,nullptr);
    Node* temp=dummynode;
    while(t1!=NULL && t2!=NULL){
        if(t1->data<t2->data){
            temp->next=t1;
            temp=t1;
            t1=t1->next;
        }
        else{
            temp->next=t2;
            temp=t2;
            t2=t2->next;
        }
    }
    if(t1) temp->next=t1;
    else temp->next=t2;
    return dummynode->next;
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
    vector<int> arr1={2,4,6,7,9};
    vector<int> arr2={1,3,4,6,9};
    Node* head1=convertArrtoLL(arr1);
    Node* head2=convertArrtoLL(arr2);
    Node* head=merge(head1,head2);
    printLL(head);
    return 0;
}
//tc=0(n1+n2)
//sc=0(1)