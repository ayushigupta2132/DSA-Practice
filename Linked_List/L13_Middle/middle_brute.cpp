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
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    int midNode=(cnt/2)+1;
    temp=head;
    while(temp!=NULL){
        midNode=midNode-1;
        if(midNode==0) break;
        temp=temp->next;
    }
    return temp;
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